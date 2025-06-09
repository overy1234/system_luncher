using UnityEngine;

public class Coin : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // 플레이어와 충돌했는지 확인
        if (other.CompareTag("Player"))
        {
            // 코인 획득 사운드 재생 (옵션)
            // AudioManager.Instance.PlaySFX(SFX.coin_collect);
            
            // 오브젝트 비활성화 (InGameManager에서 체크하기 위해)
            gameObject.SetActive(false);
        }
    }
}
