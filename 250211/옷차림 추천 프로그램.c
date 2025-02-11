#include <stdio.h>

void main()
{
    /*
    사용자로부터 현재 온도를 입력받아 적절한 옷차림을 
    추천하는 프로그램을 작성하시오.

    1. 30도 이상 → "너무 더워요! 반팔과 반바지를 입으세요.”
    2. 25도 이상 29도 이하 → "따뜻한 날씨입니다! 가벼운 옷을 입으세요." 
    3. 15도 이상 24도 이하 → "선선한 날씨입니다! 가벼운 겉옷을 챙기세요." 
    4. 5도 이상 14도 이하 → "조금 쌀쌀합니다! 따뜻한 옷을 입으세요." 
    5. 0도 이상 4도 이하 → "매우 춥습니다! 두꺼운 외투를 꼭 입으세요." 
    6. 0도 미만 → "한파 경고! 패딩과 장갑, 모자를 착용하세요."
   */
    
    int temperature;
    
    scanf("%d", &temperature);
    

    switch(temperature / 5)
    {
        
        case 6:
            printf("너무 더워요! 반팔과 반바지를 입으세요.");
            break;
        case 5:
            printf("따뜻한 날씨입니다! 가벼운 옷을 입으세요.");
            break;
        case 3: case 4:
            printf("선선한 날씨입니다! 가벼운 겉옷을 챙기세요.");
            break;
        case 1: case 2:
            printf("조금 쌀쌀합니다! 따뜻한 옷을 입으세요.");
            break;
        case 0:
            printf("매우 춥습니다! 두꺼운 외투를 꼭 입으세요.");
            break;    
        default:
            if (temperature / 5 >= 7)
            {
                printf("너무 더워요! 반팔과 반바지를 입으세요.");
                break;
            } else {
                printf("한파 경고! 패딩과 장갑, 모자를 착용하세요.");
                break;       
            }
              
    }
}
