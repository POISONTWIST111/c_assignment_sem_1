//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!���N.
#include <stdio.h>
#include <stdlib.h>
int fact(int num){
    int fact=1;
    for (int i=1;i<=num;i++){
        fact*=i;
    };
    return fact;
};
int main()
{
    int i,n,fac,j;
    float ans,fac2 = 0;
    ans = 0;
    printf("This program will print 1/1!+2/2!+3/3!+4/4!...N.\nEnter the number: ");
    scanf("%d",&n);
    for(i=1.0;i<=n;i++) {
        fac=fact(i);
        fac2 += i/fac;
        printf("%.1f \n ",fac2);
    }
    printf("%.1f",fac2);
    return 0;
}
