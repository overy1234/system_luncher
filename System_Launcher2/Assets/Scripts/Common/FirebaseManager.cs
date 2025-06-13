using Firebase;
using Firebase.Auth;
using Firebase.Extensions;
using Firebase.RemoteConfig;
using Google;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirebaseManager : SingletonBehaviour<FirebaseManager>
{
    private FirebaseApp m_App;
    //Remote Config
    private FirebaseRemoteConfig m_RemoteConfig;
    private bool m_IsRemoteConfigInit = false;
    private Dictionary<string, object> m_RemoteConfigDic = new Dictionary<string, object>();
    //Auth
    private FirebaseAuth m_Auth;
    private bool m_IsAuthInit = false;
    private const string GOOGLE_WEB_CLIENT_ID = "634149055988-3eqgr446brthb86uqsr8n943890mtdit.apps.googleusercontent.com";
    private GoogleSignInConfiguration m_GoogleSignInConfiguration;
    private FirebaseUser m_FirebaseUser;
    public bool HasSignedInWithGoogle { get; private set; } = false;
    public bool HasSignedInWithApple { get; private set; } = false;

    protected override void Init()
    {
        base.Init();

        LoadData();
        StartCoroutine(InitFirebaseServiceCo());
    }

    public bool IsInit()
    {
        return m_IsRemoteConfigInit && m_IsAuthInit;
    }

    private void LoadData()
    {
        HasSignedInWithGoogle = PlayerPrefs.GetInt("HasSignedInWithGoogle") == 1 ? true : false;
        HasSignedInWithApple = PlayerPrefs.GetInt("HasSignedInWithApple") == 1 ? true : false;
    }

    private void SaveData()
    {
        PlayerPrefs.SetInt("HasSignedInWithGoogle", HasSignedInWithGoogle ? 1 : 0);
        PlayerPrefs.SetInt("HasSignedInWithApple", HasSignedInWithApple ? 1 : 0);
        PlayerPrefs.Save();
    }

    private IEnumerator InitFirebaseServiceCo()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            var dependencyStatus = task.Result;
            if(dependencyStatus == DependencyStatus.Available)
            {
                Logger.Log($"FirebaseApp initialization success.");

                m_App = FirebaseApp.DefaultInstance;
                InitRemoteConfig();
                InitAuth();
            }
            else
            {
                Logger.LogError($"FirebaseApp initialization failed. DependencyStatus:{dependencyStatus}");
            }
        });

        var elapsedTime = 0f;
        while(elapsedTime < GlobalDefine.THIRD_PARTY_SERVICE_INIT_TIME)
        {
            if(IsInit())
            {
                Logger.Log($"{GetType()} initialization success.");
                yield break;
            }

            elapsedTime += Time.deltaTime;
            yield return null;
        }

        Logger.LogError($"FirebaseApp initialization failed.");
    }

    #region REMOTE_CONFIG
    private void InitRemoteConfig()
    {
        m_RemoteConfig = FirebaseRemoteConfig.DefaultInstance;
        if(m_RemoteConfig == null)
        {
            Logger.LogError($"FirebaseApp initialization failed. FirebaseRemoteConfig is null.");
            return;
        }

        m_RemoteConfigDic.Add("dev_app_version", string.Empty);
        m_RemoteConfigDic.Add("real_app_version", string.Empty);

        m_RemoteConfig.SetDefaultsAsync(m_RemoteConfigDic).ContinueWithOnMainThread(task =>
        {
            m_RemoteConfig.FetchAsync(TimeSpan.Zero).ContinueWithOnMainThread(fetchTask =>
            {
                if(fetchTask.IsCompleted)
                {
                    m_RemoteConfig.ActivateAsync().ContinueWithOnMainThread(activateTask =>
                    {
                        if(activateTask.IsCompleted)
                        {
                            //Get values from Remote Config
                            m_RemoteConfigDic["dev_app_version"] = m_RemoteConfig.GetValue("dev_app_version").StringValue;
                            m_RemoteConfigDic["real_app_version"] = m_RemoteConfig.GetValue("real_app_version").StringValue;
                            m_IsRemoteConfigInit = true;
                        }
                    });
                }
            });
        });
    }

    public string GetAppVersion()
    {
#if DEV_VER
        if(m_RemoteConfigDic.ContainsKey("dev_app_version"))
        {
            return m_RemoteConfigDic["dev_app_version"].ToString();
        }
#else
        if(m_RemoteConfigDic.ContainsKey("real_app_version"))
        {
            return m_RemoteConfigDic["real_app_version"].ToString();
        }
#endif

        return string.Empty;
    }
    #endregion

    #region AUTH
    private void InitAuth()
    {
        m_Auth = FirebaseAuth.DefaultInstance;
        if(m_Auth == null)
        {
            Logger.Log($"FirebaseApp initialization failed. FirebaseAuth is null");
            return;
        }

        m_Auth.StateChanged += OnAuthStateChanged;

        m_GoogleSignInConfiguration = new GoogleSignInConfiguration
        {
            WebClientId = GOOGLE_WEB_CLIENT_ID,
            RequestIdToken = true
        };

        m_IsAuthInit = true;

        if(m_Auth.CurrentUser == null)
        {
            if(HasSignedInWithGoogle)
            {
                SignInWithGoogle();
            }
            else if(HasSignedInWithApple)
            {
                SignInWithApple();
            }
        }
        else
        {
            m_FirebaseUser = m_Auth.CurrentUser;
        }
    }

    private void OnAuthStateChanged(object sender, System.EventArgs eventArgs)
    {
        if(SceneLoader.Instance.GetCurrentScene() == SceneType.Title)
        {
            return;
        }

        if(m_Auth != null && m_Auth.CurrentUser == null)
        {
            Logger.Log("User signed out or disconnected.");
            m_FirebaseUser = null;
            HasSignedInWithGoogle = false;
            HasSignedInWithApple = false;
            SaveData();
            AudioManager.Instance.StopBGM();
            UIManager.Instance.CloseAllOpenUI();
            SceneLoader.Instance.LoadScene(SceneType.Title);
        }
    }

    public bool IsSignedIn()
    {
#if UNITY_EDITOR
        return true;
#else
        return m_FirebaseUser != null;
#endif
    }
    #endregion

    public void SignInWithGoogle()
    {
        GoogleSignIn.Configuration = m_GoogleSignInConfiguration;
        GoogleSignIn.DefaultInstance.SignIn().ContinueWithOnMainThread(task =>
        {
            if(task.IsCanceled || task.IsFaulted)
            {
                if(task.IsCanceled)
                {
                    Logger.LogError($"SignInWithGoogle was canceled.");
                }
                else if(task.IsFaulted)
                {
                    Logger.LogError($"SignInWithGoogle encountered an error: {task.Exception}");
                }

                ShowLoginFailUI();
                return;
            }

            GoogleSignInUser googleUser = task.Result;
            Credential credential = GoogleAuthProvider.GetCredential(googleUser.IdToken, null);
            m_Auth.SignInWithCredentialAsync(credential).ContinueWithOnMainThread(authTask =>
            {
                if(authTask.IsCanceled || authTask.IsFaulted)
                {
                    if(authTask.IsCanceled)
                    {
                        Logger.LogError($"SignInWithCredentialAsync was canceled.");
                    }
                    else if(authTask.IsFaulted)
                    {
                        Logger.LogError($"SignInWithCredentialAsync encountered an error: {authTask.Exception}");
                    }

                    ShowLoginFailUI();
                    return;
                }

                m_FirebaseUser = authTask.Result;
                Logger.Log($"User signed in successfully: {m_FirebaseUser.DisplayName} ({m_FirebaseUser.UserId})");

                HasSignedInWithGoogle = true;
                HasSignedInWithApple = false;
                SaveData();
            });
        });
    }

    public void SignInWithApple()
    {

    }

    public void SignOut()
    {
        if(m_FirebaseUser != null)
        {
            m_Auth.SignOut();
            Logger.Log($"User signed out successfully.");
        }
    }

    private void ShowLoginFailUI()
    {
        var uiData = new ConfirmUIData();
        uiData.ConfirmType = ConfirmType.OK;
        uiData.TitleTxt = "Error";
        uiData.DescTxt = "Failed to sign in";
        uiData.OKBtnTxt = "OK";
        uiData.OnClickOKBtn = () =>
        {
            var uiData = new BaseUIData();
            UIManager.Instance.OpenUI<LoginUI>(uiData);
        };
        UIManager.Instance.OpenUI<ConfirmUI>(uiData);
    }
}
