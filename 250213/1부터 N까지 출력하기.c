#include <stdio.h>

void main()
{
    int num;
    int i = 1;
    scanf("%d", &num);
    while (i < num+1) {
        printf("%d ", i);
        i = i + 1;
    }
}