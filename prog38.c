//PROGRAM TO PRINT 1,4,9,16,25,………N.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i;
    printf("This program will give the sum of squares of numbers less than the  inputed number\nEnter a number: ");
    scanf("%d",&n);
    a = 1;
    printf(" %d",a);
    for(i=2;;i++) {
        a = i*i;
        if(a>=n) {
            break;
        }
        printf(", %d",a);
    }
    printf(".");

    return 0;
}
