/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main()
{
    //정수 A,B를 입력받아 다음 규칙에 따르는 프로그램을 작성하시오
    //1.A가 B의 배수이면 A/B 출력
    //2.A가 B보다 크고 배수가 아니라면 A%B출력
    //3.A가 B보다 작다면, A+B를 출력
    //4.아무것도 해당되지 않는다면 A,B 각각 출력
    
    
    int A, B;

    
    scanf("%d", &A);
    scanf("%d", &B);

    
    if (A % B == 0) 
    {
        printf("%d\n", A / B);
    } else if (A > B) {
        printf("%d\n", A % B);
    } else if (A < B) {
        printf("%d\n", A + B);
    } else {
        printf("%d %d\n", A, B);
    }
}