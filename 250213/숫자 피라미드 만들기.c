#include <stdio.h>

void main()
{
    int n; //피라미드 높이 설정
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {  //높이
        
        for (int k = i; k <= n; k++) {  // i = 1 일때 빈칸 1~n개  2일때 2~n개 이런식으로 하나씩 빈칸 적어짐
            printf(" ");
            
        }
        for (int j = 1; j <= i; j++) {  // 숫자 출력 1,12,123
            printf("%d ", j);
        }
        printf("\n");// 개행
    }
}
    

