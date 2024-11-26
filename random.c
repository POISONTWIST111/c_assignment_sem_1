#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a,int b);
int sub(int a,int b);

int main() {
    int (*booom) (int ,int );
    booom = add;
    int n = booom(5,10);
    printf("%d",n);
    booom = sub;
    n = booom(5,10);
    printf("%d",n);

    return 0;
}

int add(int a,int b) {
    return a+b;
}

int sub(int a,int b) {
    return a-b;
}