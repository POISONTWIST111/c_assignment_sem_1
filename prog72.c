//Write a program in C to rotate an array by N positions.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[10],array2[10];
    int min;
    int n;
    printf("To shift an array of 10 elements.\n");
    for(int i=0;i<10;i++) {
        printf("Input the number for the array:\n");
        scanf("%d",&array[i]);
    }
    printf("Enter the number by which the array is to be shifted:");
    scanf("%d",&n);
    while(n>10) {
        n = n - 10;
    }
    printf("Present array...\n");
    printf("[ ");
    for(int i=0;i<10;i++) {
        printf("%d  ",array[i]);
    }
    printf(" ]");
    printf("\n");
    for(int i=0;i<10;i++) {
        array2[i] = array[(i + n > 10)? i + n - 10 : i + n];
    }
    printf("The shifted array:\n");
    printf("[ ");
    for(int i=0;i<10;i++) {
        printf("%d  ",array2[i]);
    }
    printf(" ]");
    return 0;
}