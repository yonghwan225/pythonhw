#include <stdio.h>

void main()
{
    /*어떤 숫자가 다음 조건 중 하나라도 만족하면 특별한 숫자라고 판단한다.
    1숫자가 3의 배수이면서 홀수이다.
    2숫자의 각 자리 숫자의 합이 7의 배수이다.
    3숫자의 첫 번째 자리 숫자가 마지막 자리 숫자보다 크다.
    (숫자의 입력값은 0부터 999까지의 제한한다)    */
    
    int a, b, c, abc,sum;
    scanf("%d", &abc);
    a = abc / 100;
    b = (abc % 100) / 10;
    c = abc % 10;
    sum = a + b + c;
   

    if (abc % 3 == 0 && abc % 2 != 0)
    {
        printf("1.특별한숫자");
    }
    if (sum % 7 == 0)
    {
        printf("2.특별한숫자");
    }
    if (a > c)
    {
        printf("3.특별한숫자");
    } else if (a == 0 && b > c) {
        printf("3.특별한숫자");
    } else {
        printf("특별하지 않은 숫자");
    }
}
