//WRITE A PROGRAM TO FIND LENGTH OF A GIVEN STRING INCLUDING AND EXCLUDING SPACES
//USING POINTERS.
#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char string[100];
    gets(string);
    int counting_with_space = 0,counting_without_space = 0;
    char *pnt;
    pnt = &string;
    while(*pnt!=('\0')) {
        counting_with_space++;
        if(*pnt!=' ') 
        counting_without_space++;
        pnt++;
    }
    printf("Characters with spaces: %d\nCharacters whiout spaces: %d",counting_with_space,counting_without_space);
    return 0;
}
