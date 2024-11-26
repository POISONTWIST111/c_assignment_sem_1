#include<stdio.h>
#include<string.h>
//WRITE A C PROGRAM TO COUNT THE NUMBER OF 
//VOWELS IN A STRING USING POINTER.
int main()
{
    printf("Enter the string: ");
    char input[100];
    gets(input);
    char *pnt = &input;
    char vowels[5] = {'a','e','i','o','u'};
    int result = 0;
    for(int i=0;i<strlen(input);i++) {
        for(int j=0;j<5;j++) {
            if(*pnt==vowels[j]) {
                result++;
                break;
            }
        }
        pnt++;
    }
    printf("Number of vowels: %d",result);
    return 0;
}