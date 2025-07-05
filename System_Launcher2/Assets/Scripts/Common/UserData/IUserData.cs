using System.Collections.Generic;
using UnityEngine;
// 사용자 데이터 인터페이스
public interface IUserData
{
    bool IsLoaded { get; set; }
    // 기본값으로 데이터 초기화
    void SetDefaultData();
    // 데이터 로드
    void LoadData();
    // 데이터 저장
    void SaveData();

    void SetData(Dictionary<string, object> firestoreDict);
}
