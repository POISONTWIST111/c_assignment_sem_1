#include<stdio.h>

int main()
{
    int N=4;
    int *p;

    p = &N;

    printf("%d\n", N);
    printf("%p\n", N);
    printf("%p\n", &N);
    printf("%d\n", &N);
    printf("%p\n", p);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%p\n", &p);
    
}