//PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float n;
    long int fabnum1,fabnum2;
    printf("Enter how many Fibonacci numbers do you want in output: \n");
    scanf("%f",&n);
    fabnum1 = 0;
    fabnum2 = 1;
    n = n - 2;
    printf(" %ld, %ld",fabnum1,fabnum2);
    n = n/2;
    for(int i =0;i<n;i++) {
    fabnum1 = fabnum1 + fabnum2;
    printf(", %ld",fabnum1);
    fabnum2 = fabnum1 + fabnum2;
    printf(", %ld",fabnum2);
    }
    printf(".");
    return 0;
}
