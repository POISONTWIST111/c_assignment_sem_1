//PROGRAM TO CALCULATE FACTORIAL OF A NUMBER
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n = 1;
    long int ans = 1;
    long int i;
    printf("This program will give the factorial value of your inputed number.\n");
    printf("Enter your number: ");
    scanf("%ld",&n);
    for (i=0;i<n;i++) {
        ans = ans*(n-i);
    }
    printf("The factorial value of %ld is %ld",n,ans);
    return 0;
}
