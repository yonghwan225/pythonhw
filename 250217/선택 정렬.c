#include <stdio.h>

void main()
{
    
////////////////////////////////////////////////////초기값 입력
    int arr[5]; //5열 배열 선언
    int *ptr = arr;
    
    printf("행렬의 요소를 입력하세요:\n");
    for (int i = 0; i < 5; i++) {
        printf("[%d]: ", i);
        scanf("%d", &arr[i]);  //입력
    }
    
    printf("\n초기\n");
    for (int i = 0; i < 5; i++) { 
            printf("%d  ", arr[i]);
    }
    printf("\n\n");
///////////////////////////////////////////////////// 

    for (int i = 0; i < 5; i++) {  
        printf("%d회차\n", i + 1);
        int temp;
        int min = 2147483647;   //32bit 의  int값 최대치
        int cnt; 
        for (int j = i; j < 5; j++) {
            if (*(ptr + j) < min) {
                min = *(ptr + j);
                cnt = j;   // 마지막으로 찾은 최소값 위치 저장
            }
        }
        temp = *(ptr + i);    // i위치에 있는 값 
        *(ptr + i) = min;     // 최소값  
        *(ptr + cnt) = temp;  // 마지막으로 찾은 최소값 위치에 넣음
        
        for (int i = 0; i < 5; i++) { 
            printf("%d  ", arr[i]);
        }
        printf("\n");
    }
}
