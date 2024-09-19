//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include<stdio.h>

void my_function(int n) {       
    if (num % 2 == 0) {
        printf("Entered number is even.");
    } else  {
    printf("Entered number is odd.");
    }
}

int main() {
    int num;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d",&num);
    my_function(num);
    
    return 0;
}