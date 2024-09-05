//PROGRAM TO READ TWO NUMBERS AND CALCULATE POWER WITHOUT USING THE HEADER FILE MATH.H.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int1,int2,ans;
    ans = 1;
    printf("Enter the base: ");
    scanf("%ld",&int1);
    printf("Enter the power: ");
    scanf("%ld",&int2);
    for (int i=0;i<int2;i++) {
        ans = ans*int1;
        }
        printf("%ld  ^  %ld  =  %ld",int1,int2,ans);

    return 0;

}
