//EARTH TAKE 31558150 SECS CONVERT IN DAYS AND MINUTES
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sec,min,hour,day;
    sec = 31558150;
    min = sec / 60;
    sec = sec % 60;
    hour = min / 60;
    min = min % 60;
    day = hour / 60;
    hour = hour & 60;
    printf("Hence result is: \n");
    printf("Day:  %ld    Hour: %ld    Min: %ld    sec: %ld",day,hour,min,sec);
    
    return 0;
}
