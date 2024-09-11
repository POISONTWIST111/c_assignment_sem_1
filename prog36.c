//PROGRAM TO PRINT 1,3,5,7,9���N.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    printf("This program will enter all odd numbers which are less than inputed number.\nEnter your number: ");
    scanf("%d",&n);
    a = 1;
    i = 2;
    printf("%ld",a);
    a = a + 2;
    while(i<n){
        printf(", %ld",a);
        i++;
        i++;
        a = a + 2;
    }
    return 0;
}
