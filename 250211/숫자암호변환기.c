#include <stdio.h>

void main()
{
    //사용자가 0 ~ 9 사이의 숫자를 입력하면,
    //특정 규칙에 따라 변환된 암호 값을 출력하는 프로그램을 작성하시오. 
    int a = 0;
    scanf("%d", &a);
    
    switch(a)
    {
        case 0:
            printf("A");
            break;
        case 1:
            printf("B");
            break;
        case 2:
            printf("C");
            break;
        case 3:
            printf("D");
            break;
        case 4:
            printf("E");
            break;
        case 5:
            printf("F");
            break;
        case 6:
            printf("G");
            break;
        case 7:
            printf("H"); 
            break;
        case 8:
            printf("I");
            break;
        case 9:
            printf("J");  
            break;
        default:
            printf("잘못된 입력입니다!");
    }
}