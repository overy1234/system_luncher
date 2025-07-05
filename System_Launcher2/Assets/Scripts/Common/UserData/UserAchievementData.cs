using SuperMaxim.Messaging;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[Serializable]
public class UserAchievementProgressData
{
    public AchievementType AchievementType;
    public int AchievementAmount;
    public bool IsAchieved;
    public bool IsRewardClaimed;
}

[Serializable]
public class UserAchievementProgressDataListWrapper
{
    public List<UserAchievementProgressData> AchievementProgressDataList;
}

public class AchievementProgressMsg
{

}

public class UserAchievementData : IUserData
{
    public bool IsLoaded { get; set; }
    public List<UserAchievementProgressData> AchievementProgressDataList { get; set; } = new List<UserAchievementProgressData>();

    public void SetDefaultData()
    {
        UserAchievementProgressData userAchievementProgressData = new UserAchievementProgressData();
        userAchievementProgressData.AchievementType = AchievementType.CollectGold;
        userAchievementProgressData.AchievementAmount = 1000;
        userAchievementProgressData.IsAchieved = true;
        userAchievementProgressData.IsRewardClaimed = false;
        AchievementProgressDataList.Add(userAchievementProgressData);
    }

    public void LoadData()
    {
        Logger.Log($"{GetType()}::LoadData");

        FirebaseManager.Instance.LoadUserData<UserAchievementData>(() =>
        {
            IsLoaded = true;
        });
    }

    public void SaveData()
    {
        Logger.Log($"{GetType()}::SaveData");

        FirebaseManager.Instance.SaveUserData<UserAchievementData>(ConvertDataToFirestoreDict());
    }

    public UserAchievementProgressData GetUserAchievementProgressData(AchievementType achievementType)
    {
        return AchievementProgressDataList.Where(item => item.AchievementType == achievementType).FirstOrDefault();
    }

    public void ProgressAchievement(AchievementType achievementType, int achieveAmount)
    {
        var achievementData = DataTableManager.Instance.GetAchievementData(achievementType);
        if (achievementData == null)
        {
            Logger.LogError("AchievementData does not exist.");
            return;
        }

        UserAchievementProgressData userAchievementProgressData = GetUserAchievementProgressData(achievementType);
        if (userAchievementProgressData == null)
        {
            userAchievementProgressData = new UserAchievementProgressData();
            userAchievementProgressData.AchievementType = achievementType;
            AchievementProgressDataList.Add(userAchievementProgressData);
        }

        if (!userAchievementProgressData.IsAchieved)
        {
            userAchievementProgressData.AchievementAmount += achieveAmount;
            if (userAchievementProgressData.AchievementAmount > achievementData.AchievementGoal)
            {
                userAchievementProgressData.AchievementAmount = achievementData.AchievementGoal;
            }

            if (userAchievementProgressData.AchievementAmount == achievementData.AchievementGoal)
            {
                userAchievementProgressData.IsAchieved = true;
            }

            SaveData();

            var achievementProgressMsg = new AchievementProgressMsg();
            Messenger.Default.Publish(achievementProgressMsg);
        }
    }

    private Dictionary<string, object> ConvertDataToFirestoreDict()
    {
        Dictionary<string, object> dict = new Dictionary<string, object>();

        List<Dictionary<string, object>> convertedAchievementProgressDataList = new List<Dictionary<string, object>>();
        foreach (var item in AchievementProgressDataList)
        {
            var convertedItem = new Dictionary<string, object>()
            {
                { "AchievementType", item.AchievementType},
                { "AchievementAmount", item.AchievementAmount},
                { "IsAchieved", item.IsAchieved},
                { "IsRewardClaimed", item.IsRewardClaimed}
            };
            convertedAchievementProgressDataList.Add(convertedItem);
        }

        dict["AchievementProgressDataList"] = convertedAchievementProgressDataList;
        return dict;
    }

    public void SetData(Dictionary<string, object> firestoreDict)
    {
        ConvertFirestoreDictToData(firestoreDict);
    }

    private void ConvertFirestoreDictToData(Dictionary<string, object> dict)
    {
        if (dict.TryGetValue("AchievementProgressDataList", out object achievementDataListObj) && achievementDataListObj is List<object> achievementList)
        {
            foreach (var item in achievementList)
            {
                if (item is Dictionary<string, object> itemDict)
                {
                    UserAchievementProgressData achievementProgressData = new UserAchievementProgressData();

                    if (itemDict.TryGetValue("AchievementType", out var achievementTypeValue) && achievementTypeValue is AchievementType achievementType)
                    {
                        achievementProgressData.AchievementType = achievementType;
                    }

                    if (itemDict.TryGetValue("AchievementAmount", out var achievementAmountValue) && achievementAmountValue != null)
                    {
                        achievementProgressData.AchievementAmount = Convert.ToInt32(achievementAmountValue);
                    }

                    if (itemDict.TryGetValue("IsAchieved", out var isAchievedValue) && isAchievedValue is bool isAchieved)
                    {
                        achievementProgressData.IsAchieved = isAchieved;
                    }

                    if (itemDict.TryGetValue("IsRewardClaimed", out var isRewardClaimedValue) && isRewardClaimedValue is bool isRewardClaimed)
                    {
                        achievementProgressData.IsRewardClaimed = isRewardClaimed;
                    }

                    AchievementProgressDataList.Add(achievementProgressData);
                }
            }
        }
    }
}
