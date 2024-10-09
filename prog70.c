//PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY. DOUVT
#include <stdio.h>
#include <stdlib.h>

int main(){
    char array[10],lol;
    int boom = 0;
    printf("PROGRAM TO READ AN ARRAY AND PRINT THE OCCURRENCE OF ANY PARTICULAR ELEMENT IN THE ARRAY.\nFor the Array of 10\n");
    for(int i=0;i<10;i++) {
        printf("Enter a character:\n");
        //scanf("%c",&array[i]);
        array[i] = getchar();
        getchar();
    }
        
    printf("Enter The character you want to check the repeation:\n");
    scanf("%c",&lol);
    for(int i=0;i<10;i++) {
        if(lol==array[i]) {
            boom++;
        }
    }
    printf("Your asked character occured %d times in your inputed Array.",boom);
    return 0;
}