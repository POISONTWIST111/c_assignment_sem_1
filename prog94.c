//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
//POINTERS.FOR EXAMPLE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[100],result[100];
    scanf("%s",string);
    int n = 0;
    char *pnt = &string[0];
    while (string[n]!='\0') {
        result[n] = *pnt;
        n++;
        pnt++;
    }
    int i = 0;
    n++;
    while(n--) {
        result[i] = *pnt;
        pnt--;
        i++;
    }
    printf("\n");    
    for(int i=0;i<strlen(string)+1;i++) {
        printf("%c",result[i]);
    }
    

    return 0;
}