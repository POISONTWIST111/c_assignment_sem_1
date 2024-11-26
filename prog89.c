// WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF
// SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY.
#include <stdio.h>
#include <stdlib.h>
int main() {

    int array[] = {45,56,67,78,89};
    int *pnt = NULL;
    pnt = &array;
    int array2[5];
    for (int i=0;i<5;i++) {
        array2[4-i] = *pnt/* + i*sizeof(array)*/;
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
