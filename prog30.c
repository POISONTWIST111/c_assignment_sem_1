//PROGRAM TO REVERSE OF A GIVEN NO.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,temp_Num,digi;
    int rev = 0;
    printf("Enter a number to be reverse: ");
    scanf("%d", &num);
    temp_Num = num; 
    while (num != 0) {
        digi = num % 10;
        rev = rev * 10 + digi;
        num = num / 10; 
    }
    printf(" Your reversed Number is: %d\n", rev);
    return 0;
}
