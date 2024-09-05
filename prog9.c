#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    long int ans;
    printf("Enter the number of hours, mins and seconds and get total number of seconds\n");
    printf("Enter the number of hours:\n");
    scanf("%d",&h);
    printf("Enter the number of mins:\n");
    scanf("%d",&m);
    printf("Enter the number of secs:\n");
    scanf("%d",&s);\
    ans = 0;
    h = h * 60 * 60;
    m = m * 60;
    ans = h + m + s;
    printf("Total number of seconds: %ld",ans);
    return 0;
}
