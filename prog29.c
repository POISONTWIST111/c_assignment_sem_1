// /PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num,temp_num,digi;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp_num = num; 
    while (num != 0) {
        digi = num % 10;
        rev = rev * 10 + digi;
        num = num / 10; 
    }
    if(rev==temp_num) {
        printf("Entered number is a palindrome.");
    } else {
        printf("Entered number is not a palindrom.");
    }
    return 0;
}
