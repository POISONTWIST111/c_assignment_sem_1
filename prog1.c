//PROGRAM TO CALCULATE SIMPLE INTEREST.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Simple Interest\n");
    int p,r,t;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%d",&r);
    printf("Enter is no. of years: ");
    scanf("%d",&t);
    printf("The interest that you will get is %d",r*p*t/100);// Formula of SI
    return 0;
}
