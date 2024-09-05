#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    a = 10;
    b = 25;
    printf("The values of a and b are: \n a = %d        b = %d\n",a,b);
    a = a - b;
    b = a + b;
    a = b - a;
    printf("The swapped values of a and b are:\n a = %d        b = %d",a,b);
    return 0;
}
