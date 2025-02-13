#include <stdio.h>

void main()
{
    int M, N;
    while(1) { 
        printf("첫번째 숫자 입력")
        scanf("%d\n", &M);
        printf("두번째 숫자 입력")
        scanf("%d", &N);
        if (M > N) {
            printf("첫 숫자가 더 작아야 합니다\n");
            continue;
        }
        break;
    }
    
    
    for (int i = M; i <= N; i++) {
        int num = i; 
        int seven = 0;
        
        while (num > 0) { 
            if (num % 10 == 7) {
                seven = 1;
                break; // 7을 포함하는 경우 seven 변수 1로 만들고 탈출
            }
            num /= 10; // 10으로 계속 나누면서 한자리씩 깎아나감 1의자리까지 가면 0이되서 while 문 탈출
        }
        
        
        if (i % 7 == 0 || seven == 1) {  // 7의 배수거나 7을 포함하면 컨티뉴
            continue;
        }
        
        
        printf("%d\n", i); //출력하고
        
        if (i % 5 == 0) {  //5의 배수면 탈출
            break;
        }
    }
}
    

