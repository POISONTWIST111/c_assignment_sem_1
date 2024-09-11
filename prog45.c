//With this program the user has to guess a number that the program has picked as the lucky number
#include <stdio.h>
#include <stdlib.h>

int main() {
    int min = 0, max = 25;
    int count1 = rand() % max;
    int lol;
        printf("%d",count1);
        printf("Try to guess the computer's output\nEnter a number between 0 and 25:");
        scanf("%d",&lol);
        if(lol==count1) {
            printf("You guessed correctly!!\n");
        } else {
            printf("Oops..!! You got it wrong.");
        }
    return 0;
}