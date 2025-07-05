using System.Collections.Generic;
using UnityEngine;

public class UserSettingsData : IUserData
{
    public bool IsLoaded { get; set; }
    public bool BGM { get; set; }
    public bool SFX { get; set; }

    public void SetDefaultData()
    {
        Logger.Log($"{GetType()}::SetDefaultData");

        BGM = true;
        SFX = true;
    }

    public void LoadData()
    {
        Logger.Log($"{GetType()}::LoadData");

        FirebaseManager.Instance.LoadUserData<UserSettingsData>(() =>
        {
            IsLoaded = true;
        });
    }

    public void SaveData()
    {
        Logger.Log($"{GetType()}::SaveData");

        FirebaseManager.Instance.SaveUserData<UserSettingsData>(ConvertDataToFirestoreDict());
    }

    private Dictionary<string, object> ConvertDataToFirestoreDict()
    {
        Dictionary<string, object> dict = new Dictionary<string, object>
        {
            { "BGM", BGM },
            { "SFX", SFX }
        };

        return dict;
    }

    public void SetData(Dictionary<string, object> firestoreDict)
    {
        ConvertFirestoreDictToData(firestoreDict);
    }

    private void ConvertFirestoreDictToData(Dictionary<string, object> dict)
    {
        if (dict.TryGetValue("BGM", out var bgmValue) && bgmValue is bool bgm) BGM = bgm;
        if (dict.TryGetValue("SFX", out var sfxValue) && sfxValue is bool sfx) SFX = sfx;
    }
}