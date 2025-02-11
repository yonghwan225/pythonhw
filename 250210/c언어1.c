#include <stdio.h>

void main()
{
    float a, b, c; 
    float result;
    printf("숫자 사이에 공백을 넣어 세개 입력 : ");
    while(1)
    {
        scanf("%f %f %f", &a, &b, &c);
        if(c != 0)
        {
            break;
        }else {
            printf("0으로 나눌수 없습니다");
        }
    }
    result = (a + b) * c - (a - b) / c;
    printf("연산 결과 : (%.0f + %.0f) * %.0f - (%.0f - %.0f) / %.0f = %.5f", a, b, c, a, b, c, result);

}
