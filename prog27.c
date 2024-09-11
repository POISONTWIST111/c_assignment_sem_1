//PROGRAM CHECK WHETHER A NUMBER IS PRIME
#include<stdio.h>

int main()
{
    int n,r;
    r = 1;
    printf("Enter a number to check whether a number is prime: ");
    scanf("%d",&n);

        if (n==1){
        printf("Entered number is not prime.\n");
        return 0;
        }
        for (int i=2;i<n/2;i++) {
        r = n%i;
        if(r==0) {
            break;
        }
        }
        if (r==0)   {
            printf("Entered number is not prime.");
        } else {
        printf("Entered number is prime");
        }
    return 0;
}
