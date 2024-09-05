//PROGRAM TO PRINT 2,4,6,8,10,12………N.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,a;
    printf("This program will enter all even numbers which are less than inputed number.\nEnter your number: ");
    scanf("%d",&n);
    a = 0;
    i = 1;
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
