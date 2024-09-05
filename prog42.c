//READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE
#include<stdio.h>

int main()
{
    int n,r;
    r = 1;
    printf("Enter a number to check whether a number is prime or composite number: ");
    scanf("%d",&n);

        if (n==1){
        printf("1 is not prime nor composite.\n");
        return 0;
        }
        for (int i=2;i<n/2;i++) {
        r = n%i;
        if(r==0) {
            break;
        }
        }
        if (r==0)   {
            printf("Entered number is composite.");
        } else {
        printf("Entered number is prime");
        }

    return 0;
}
