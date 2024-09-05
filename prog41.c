//READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,a;
    printf("This program will give the factors of the inputed number\nENter the number: ");
    scanf("%d",&n);
    printf("THe factors of %d are:\n1",n);
    a = n/2;
    a++;
    for(int i=2;i<a;i++) {
        b = n % i;
        if(b==0) {
            printf(", %d",i);
        }
    }
    printf(", %d.",n);
    return 0;
}
