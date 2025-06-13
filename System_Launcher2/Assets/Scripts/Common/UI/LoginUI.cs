// 로그인 UI 클래스 - BaseUI를 상속받음
public class LoginUI : BaseUI
{
    // Google 로그인 버튼 클릭 이벤트 메서드
    public void OnClickSignInWithGoogle()
    {
        // Google 로그인 버튼 클릭 로그 출력
        Logger.Log($"{GetType()::OnClickSignInWithGoogle}");

        // Firebase 매니저를 통한 Google 로그인 실행
        FirebaseManager.Instance.SignInWithGoogle();
        // 현재 UI 닫기
        CloseUI();
    }

    // Apple 로그인 버튼 클릭 이벤트 메서드
    public void OnClickSignInWithApple()
    {
        // Apple 로그인 버튼 클릭 로그 출력
        Logger.Log($"{GetType()::OnClickSignInWithApple}");

        // Firebase 매니저를 통한 Apple 로그인 실행
        FirebaseManager.Instance.SignInWithApple();
        // 현재 UI 닫기
        CloseUI();
    }
}
