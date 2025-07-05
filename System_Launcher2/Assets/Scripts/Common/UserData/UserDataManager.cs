using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

// 사용자 데이터를 관리하는 싱글톤 매니저 클래스
public class UserDataManager : SingletonBehaviour<UserDataManager>
{
    // 저장된 데이터가 존재하는지 확인하는 프로퍼티
    //����� ���� ������ ���� ����
    public bool ExistsSavedData { get; private set; }
    // 모든 사용자 데이터 인스턴스를 관리하는 리스트
    
    public List<IUserData> UserDataList { get; private set; } = new List<IUserData>();

    // 초기화 메서드 오버라이드
    protected override void Init()
    {
        // 부모 클래스의 초기화 메서드 호출
        base.Init();
        
        
        // 사용자 설정 데이터를 리스트에 추가       
        UserDataList.Add(new UserSettingsData());
        // 사용자 재화 데이터를 리스트에 추가
        UserDataList.Add(new UserGoodsData());
        // 사용자 인벤토리 데이터를 리스트에 추가
        UserDataList.Add(new UserInventoryData());
        // 사용자 플레이 데이터를 리스트에 추가
        UserDataList.Add(new UserPlayData());

        UserDataList.Add(new UserAchievementData());

    }

    // 모든 사용자 데이터를 기본값으로 설정하는 메서드
    public void SetDefaultUserData()
    {
        // 사용자 데이터 리스트 개수만큼 반복
        for (int i = 0; i < UserDataList.Count; i++)
        {
            // 각 사용자 데이터의 기본값 설정
            UserDataList[i].SetDefaultData();
        }
    }

    // 저장된 사용자 데이터를 불러오는 메서드
    public void LoadUserData()
    {
        for (int i = 0; i < UserDataList.Count; i++)
        {
            UserDataList[i].LoadData();
        }
    }

    // 사용자 데이터를 저장하는 메서드
    public void SaveUserData()
    {
        for (int i = 0; i < UserDataList.Count; i++)
        {
            UserDataList[i].SaveData();
        }
    }

    // 제네릭을 사용하여 특정 타입의 사용자 데이터를 가져오는 메서드
    public T GetUserData<T>() where T : class, IUserData
    {
        // LINQ를 사용하여 해당 타입의 첫 번째 데이터 반환
        return UserDataList.OfType<T>().FirstOrDefault();
    }

    public bool IsUserDataLoaded()
    {
        for (int i = 0; i < UserDataList.Count; i++)
        {
            if (!UserDataList[i].IsLoaded)
            {
                return false;
            }
        }

        return true;
    }
}
