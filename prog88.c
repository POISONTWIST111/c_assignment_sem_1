#include <stdio.h>
#include <stdlib.h>
// WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.
int main() {

    int array[] = {45,56,67,78,89};
    int *pnt = NULL;
    pnt = &array;
    int array2[5];
    for (int i=0;i<5;i++) {
        array2[i] = *pnt;
        pnt++;
    }

    printf("Array 1: [");
    for (int i=0;i<5;i++) {
        printf("\t%d",array[i]);
    }
    printf("\t]\n\n");

    printf("Array 2: [");
    for (int i=0;i<5;i++) {
        printf("\t%d",array2[i]);
    }
    printf("\t]\n\n");
    

    return 0;
}
