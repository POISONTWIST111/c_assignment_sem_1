//PROGRAM TO READ THREE NOS. AND PRINT MAX.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int a,max;
    printf("You need to enter 3 numbers out which this program will give you the maximum number\n");
    printf("Enter the first number: ");
    scanf("%ld",&a);
    max = a;
    printf("Enter the second number: ");
    scanf("%ld",&a);
    max = ( max >= a)? max : a;
    printf("Enter the third number: ");
    scanf("%ld",&a);
    max = ( max >= a)? max : a;
    return 0;
}
