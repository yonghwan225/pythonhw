

#include <stdio.h>

void main()
{
    printf("세자리 숫자 입력 : ");
    int a, b, c, abc, result;
    scanf("%d", &abc);
    a = abc / 100;
    b = (abc % 100) / 10;
    c = abc % 10;
    
    result = a + b + c;
    printf("자리 수의 합 : %d", result);

}