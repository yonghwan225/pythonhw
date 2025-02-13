#include <stdio.h>

void main()
{
    int n; // 높이 설정
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {  //높이
        
        for (int j = n; j >= i; j--) {  // 별 출력 i ~ n (1 ~5, 2 ~ 5)
            printf("*");
        }
        printf("\n");// 개행
    }
}
    
