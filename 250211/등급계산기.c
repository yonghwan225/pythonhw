#include <stdio.h>

void main()
{
    /*
    사용자로부터 시험 점수를 입력받고, 
    아래 조건에 따라 등급을 부여한 후 추가적인 보너스를 
    계산하여 출력하는 프로그램을 작성하시오. 
    1.등급 규칙: 90점 이상 → "A 등급" 
    2.80점 이상 89점 이하 → "B 등급" 
    3.70점 이상 79점 이하 → "C 등급" 
    4.60점 이상 69점 이하 → "D 등급" 
    5.60점 미만 → "F 등급" 

    보너스 규칙: 
    1.A 등급 → 점수의 10% 추가 보너스 
    2.B 등급 → 점수의 5% 추가 보너스 
    3.C 등급 이하 → 추가 보너스 없음    

   */
    
    int num, numA, numB, numC;
    
    scanf("%d", &num);
    

    switch(num / 10)
    {
        case 10:
            numA = num * 1.1; 
            printf("A 등급 -> %d", numA);
            break;
        case 9:
            numA = num * 1.1;
            printf("A 등급 -> %d", numA);
            break;
        case 8:
            numB = num * 1.05; 
            printf("B 등급 -> %d", numB);
            break;
        case 7:
            printf("C 등급 -> %d", num);
            break;
        case 6:
            printf("D 등급 -> %d", num);
            break; 
        default:
            printf("F 등급 -> %d", num);
            break;     
    }
}
