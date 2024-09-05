//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sec,min,hour,day;
    printf("Enter The number of seconds.\nI will convert it into time: ");
    scanf("%ld",&sec);
    min = sec / 60;
    sec = sec % 60;
    hour = min / 60;
    min = min % 60;
    day = hour / 60;
    hour = hour & 60;
    printf("Hence result is: \n");
    printf("%ld:%ld:%ld",hour,min,sec);
    return 0;
}
