//WRITE A C PROGRAM TO FINE THE VALUE OF Y USING
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("               _ \n");
    printf("              | 1 + x      where n=1 \n");
    printf("              | 1 + x/n    where n=2 \n");
    printf("  y(x,n)     -| 1 + x^n    where n=3 \n");
    printf("              | 1 + nx     when n>3 or n<1 \n");
    printf("              |_ \n");
    printf("Where n is an integer and x is any rational number.\n");
    double ans,x;
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%lf",&x);
    if(n==1) {
    ans = 1 + x;
    } else if(n==2) {
    ans = 1 + x/2;
    } else if(n==3){
    ans = x;
    ans = ans*x;
    ans = ans*x;
    ans = 1 + ans;
    } else {
    ans = 1 + n*x;
    }
    printf("The value of y is %lf",ans);
    return 0;
}
