//WRITE A FUNCTION TO CALCULATE (NCR) FACTORIAL OF A GIVEN NUMBERS.
#include <stdio.h>
#include <stdlib.h>

int factorial(int no) {
    int fact = 1;
    for (int i=1;i<=no; i++) {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r) {
    int ans = 1;
    ans = ans * factorial(n);
    ans = ans / factorial(r);
    ans = ans / factorial(n-r);
    return ans;
}
int main() {
    int n,r,boom;
    printf("This program will give the value of:-\n");
    printf("n\n C\n  r\n");
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    boom = nCr(n,r);
    printf("%d\n C  =   %d\n  %d",n,boom,r);
    return 0;
}