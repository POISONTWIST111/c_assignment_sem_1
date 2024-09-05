//READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,ans;
    ans = 0;
    printf("This program will keep on adding the positive inputed numbers till a negative number is Entered\n");
    for(i=0;1<100;i++) {
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n<0) {
            break;
        }
        ans = ans + n;
        printf("%d\n",ans);
    }
    return 0;
}
