//With this program the user has to guess a number that the program has picked as the lucky number
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int min = 0, max = 25;
    int count = (rand() % 25) + 1;
    int lol;
        printf("Try to guess the computer's output\nEnter a number between 0 and 25:");
        scanf("%d",&lol);
        if(lol==count) {
            printf("You guessed correctly!!\n");
        } else {
            printf("Oops..!! You got it wrong.");
        }
    return 0;
}