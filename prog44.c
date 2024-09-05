//AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS AS FOLLOWS.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int units;
    float ans,rate;
    printf("This program will tell you your electricity bill\nEnter your consumption in units: ");
    scanf("%d",&units);
    if(units>=0 && units<200) {
    rate = 0.5;
    ans = 0;
    units = units;
    } else if(units>=200 && units<400) {
    rate = 0.65;
    ans = 100;
    units = units - 200;
    } else if(units>=400 && units<600) {
    rate = 0.8;
    ans = 230;
    units = units - 400;
    } else if(units>=600) {
    rate = 1.25;
    ans = 425;
    units = units - 600;
    } else {
    printf("Error 404!!");
    return 0;
    }
    rate = units * rate;
    ans = ans + rate;
    printf("You need to pay Rs.%.1f",ans);
    return 0;
}
