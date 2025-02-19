
#include <stdio.h>

void main()
{
    union a {
        int intVal;
        float floatVal;
        char charVal;
    };
    
    union a u;
    scanf("%c %d %f", &u.charVal, &u.intVal, &u.floatVal);
    // scanf("%d", &u.intVal);
    
    // scanf("%f", &u.floatVal);
    
    // scanf("%s", u.charVal);
    
    printf("%c %d\n", u.charVal, &u.charVal);
    printf("%d %d\n", u.intVal, &u.intVal);
    printf("%f %d\n", u.floatVal, &u.floatVal);
    

}
