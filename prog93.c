//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[100];
    gets(string);
    int counting_space = 0;
    char *pnt;
    pnt = &string;
    while(*pnt!=('\0')) {
        if(*pnt==' ') {
            counting_space++;
        }
        pnt++;
    }
    printf("Number of words: %d",counting_space+1);
    return 0;
}
