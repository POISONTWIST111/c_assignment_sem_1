//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND GIVE ITS SUM
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers[10];
    int lol = 0;
    printf("This program will input 10 numbers from you and will give you it's sum.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number: \n");
        scanf("%d",&numbers[i]);
        lol = lol + numbers[i];
    }
    printf("%d",lol);
    return 0;
}