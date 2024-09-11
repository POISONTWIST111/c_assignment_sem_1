//PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;
    printf("Enter a number to check whether it is even or odd: ");
    scanf("%d",&num);
    if (num % 2 == 0) {
        printf("Entered number is even.");
    } else  {
    printf("Entered number is odd.");
    }
    
    return 0;
}
