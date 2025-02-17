#include <stdio.h>

void main()
{
    
////////////////////////////////////////////////////초기값 입력
    int arr[5]; //5열 배열 선언
    int i, j, l, temp;
    
    printf("행렬의 요소를 입력하세요:\n");
    for (i = 0; i < 5; i++) {
        printf("[%d]: ", i);
        scanf("%d", &arr[i]);  //입력
    }
    
    int *ptr = arr; // 
    
    printf("\n초기\n");
    for (l = 0; l < 5; l++) { 
            printf("%d  ", arr[l]);
    }
    printf("\n\n");
///////////////////////////////////////////////////// 

    for (i = 0; i < 5; i++) {  
        printf("%d회차\n", i + 1); 
        int min = 2147483647;   //32bit 의  int값 최대치
        int cnt; 
        for (j = i; j < 5; j++) {
            if (*(ptr + j) < min) {
                min = *(ptr + j);
                cnt = j;   // 마지막으로 찾은 최소값 위치 저장
            }
        }
        temp = *(ptr + i);    // i위치에 있는 값 
        *(ptr + i) = min;     // 최소값  
        *(ptr + cnt) = temp;  // 마지막으로 찾은 최소값 위치에 넣음
        
        for (l = 0; l < 5; l++) {  //1개 회차 끝나면 출력 
            printf("%d  ", arr[l]);
        }
        printf("\n");
    }
}