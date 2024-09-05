//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASELETTER, A DIGIT OR A SPECIAL SYMBOL.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter your character and this program will tell you whether it is capital,small or number: ");
    scanf("%c",&c);
    if ('A' <= c && 'Z' >= c){
        printf("Entered Character is an Uppercase Letter.\n");
    } else if ('a' <= c && 'z' >= c){
        printf("Entered character is a lowercase Letter.\n ");
    } else if ('0' <= c && '9' >= c){
        printf("Entered character is a Number.\n ");
    } else {
        printf("Entered Character is a special symbol.\n");
    }
    return 0;
}
