#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("Swapping two numbers using a third variable\n");
    int a,b,c;
    a = 30;
    b = 45;
    c = 0;
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    c = a;
    a = b;
    b = c;
    printf("Now the swapped values are:-\n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}
