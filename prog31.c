//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A �N� DIGIT NO.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    long int ans,a,i,j,lol,power_10;
    ans = 0;
    a = 0;
    i = 0;
    printf("This program will give you the sum of individual digits of the inputed number.\n");
    printf("The number should be less than 10 digits,\nEnter the number:");
    scanf("%ld",&n);
    do {
        power_10 = 1;
        for(j=0;i>=j;j++) {
            power_10 = power_10 * 10;
        }
        lol = n / power_10;
        a = n % power_10;
        n = n - a;
        a = a * 10;
        a = a / power_10;
        ans =  ans + a;
        i++;
         if(lol==0) {
            break;
        }
    } while(i<10);
    printf("Sum of Digits: %ld",ans);

    return 0;
}
