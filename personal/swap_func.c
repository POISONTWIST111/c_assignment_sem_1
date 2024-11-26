#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *p1,int *p2);
void general_swap(void *p1,void *p2,int swap);

int main() {
    int a = 5,b = 9;
    printf("Performing swap of only integers...\n");
    printf("%d,%d\n",a,b);
    swap(&a,&b);
    printf("%d,%d\n",a,b);
    printf("The general swap..\n");
    double A;
    double B;
    void (*swaper)(void*, void*,int);
    swaper = general_swap;
    printf("%d,%d\n",A,B);
    swaper(&A,&B,sizeof(A));
    printf("%d,%d\n",A,B);
    return 0;

}

void swap(int *p1,int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void general_swap(void* p1,void *p2, int size) {
    void *temp_memory = malloc(size);
    memcpy(temp_memory,p1,size);
    memcpy(p1,p2,size);
    memcpy(p2,temp_memory,size);
}