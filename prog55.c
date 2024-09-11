//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVERY ELEMENT.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int numbers[10];
    int lol;
    int odd = 0,even = 0;
    printf("This program will input 10 numbers from you and will give you how many numbers were odd and even.\n");
    for(int i=0;i<10;i++) {
        printf("Enter the number: \n");
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<10;i++) {
        lol = numbers[i] % 2;
        if (lol == 1) {
            odd++;
        } else {
            even++;
        }
    }
    printf("Number of odd terms : %d\n",odd);
    printf("Number of even terms : %d\n",even);
    return 0;
}