#include <stdio.h>

void main()
{
    struct student {
        char name[10];
        int age;
        char grade[2];
    };
    
    struct student g1;
    printf("이름 입력 : ");  
    scanf("%s", g1.name); // 배열은 주소의 의미를 내포하고 있어 &name으로 쓰지 않는다.
    printf("나이 : "); 
    scanf("%d", &g1.age);
    printf("등급 : "); 
    scanf("%s", g1.grade);
    printf("이름 : %s / 나이 : %d / 등급 : %s\n", g1.name, g1.age, g1.grade);    
}