/*IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS
LAST N DIGITS*/
#include<stdio.h>
#include<stdlib.h>

int flip(int number,int flop);

int main() {
    printf("Enter a number: ");
    int number;
    scanf("%d",&number);
    printf("Enter the number for which you we need to flip: ");
    int flop;
    scanf("%d",&flop);
    int bom = flip(number,flop);
    printf("%d",bom);
    return 0;
}

int flip(int number,int flop) {
    int k = 0;
    int temp = number;
    while(temp) {
        temp = temp / 10;
        k++;
    }
    if(k<flop) {
        return 0;
    } 
    int array_1[k],arra_2[k];
    
    
    for (int i=0;i<k;i++) {
        array_1[i] = number % 10;           
        number = number / 10;
    }

    flop--;
    for (int j=0;j<=flop/2;j++) {
        int swap = array_1[j];
        array_1[j] = array_1[flop-j];
        array_1[flop-j] = swap;
    }

    int sum = 0;
    for(int i=0;i<k;i++) {
        for(int j=0;j<i;j++) {
            array_1[i] = array_1[i] * 10;
        }
         sum += array_1[i];

    }
    return sum;
}
    