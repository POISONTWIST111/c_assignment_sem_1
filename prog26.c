//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
#include<stdio.h>

int main()
{
    int n,e,o,t;
    printf("This program will give sum of odd numbers and even numbers for 1 to N.\n");
    printf("Enter the value of N: ");
    scanf("%d",&n);
    if (n%2==0) {
    o=(n*n)/4;
    } else {
    o=((n+1)*(n+1))/4;
    }
    t = n*(n+1);
    t = t/2;
    e=t-o;
    printf("Sum of all odd terms between 1 and %d is: %d\n",n,o);
    printf("Sum of all even terms between 1 and %d is: %d",n,e);
    return 0;
}
