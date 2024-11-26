#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d",&n);
    int *pnt;
    int sum =0;
    pnt = (int *) malloc(sizeof(int) * n);
    int i = 0;
    while(n--) {
        printf("Enter the value: ");
        scanf("%d",pnt+i);
        sum += pnt[i];
        pnt++;
        i++;
    }
    printf("The Sum: %d",sum);

    return 0;
}