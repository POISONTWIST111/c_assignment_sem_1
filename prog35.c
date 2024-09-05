//PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    long int awm1,ans2,awm,ans,ans1,a,b,c,i,j,loool,lool,lol,power_10;
    ans = 0;
    a = 0;
    i = 0;
    printf("This program will give you the single digit sum of individual digits of the inputed number.\n");
    printf("The number should be less than 10,\nEnter the number:");
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
    printf("Sum of Digits: %ld\n",ans);
    awm = ans;
    awm = awm / 10;
    if(awm<=1) {
        return 0;
    }
    i = 0;
    j = 0;
    ans1 = 0;
    do {
        power_10 = 1;
        for(j=0;i>=j;j++) {
            power_10 = power_10 * 10;
        }
        lool = ans / power_10;
        b = ans % power_10;
        ans = ans - b;
        b = b * 10;
        b = b / power_10;
        ans1 =  ans1 + b;
        i++;
         if(lool==0) {
            break;
        }
    } while(i<10);
     printf("Sum of Digits: %ld\n",ans1);
      awm1 = ans1;
    awm1 = awm1 / 10;
    if(awm1<=1) {
        return 0;
    }
    i = 0;
    j = 0;
    ans2 = 0;
    do {
        power_10 = 1;
        for(j=0;i>=j;j++) {
            power_10 = power_10 * 10;
        }
        loool = ans2 / power_10;
        c = ans2 % power_10;
        ans2 = ans2 - c;
        c = c * 10;
        c = c / power_10;
        ans2 =  ans2 + c;
        i++;
         if(loool==0) {
            break;
        }
    } while(i<10);
     printf("Sum of Digits: %ld",ans2);


    return 0;
}
