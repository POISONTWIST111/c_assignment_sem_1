#include <stdio.h>
#include <stdlib.h>
// find max

void find_min_max(int a,int b,int *pmax,int *pmin);

int main() {
    int a,b,max,min;
    a = 5;
    b = 8;
    int *pmax,*pmin;
    find_min_max(a,b,&max,&min);
    printf("max = %d\tmin = %d",max,min);
    return 0;
}

void find_min_max(int a,int b,int *pmax,int *pmin) {
    if (a>b) {
        *pmax = a;
        *pmin = b;
    } else {
        *pmax = b;
        *pmin = a;
    }
}