/*MODIFY VALUE STORED IN OTHER VARIABLE USING A POINTER IN C
A. INITIALIZE THE POINTER WITH THE OTHER (A NORMAL VARIABLE WHOSE VALUE WE HAVE TO*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void modify(int *A, int N);

int main()
{
    int N,M;
    printf("Enter the Value of variable: \n");
    scanf("%d",&N);
    printf("Enter the modified value: \n");
    scanf("%d",&M);
    modify(&N,M);
    return 0;
}

void modify(int *A, int N)
{
    int *P;
    P = A;

    printf("Value before modification was %d\n", *P);
    *P = N;
    printf("Value after modification is %d", *P);
}