//.WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,n,max = INT_MIN,*pnt_max;
    pnt_max = &max;
    printf("Enter the number of times you want to test the case: ");
    scanf("%d",&n);
    while (n--) {
        scanf("%d",&a);
        if(*pnt_max<a)
            *pnt_max = a;
    }
    printf("Maximum value: %d",*pnt_max);
    
    return 0;
}