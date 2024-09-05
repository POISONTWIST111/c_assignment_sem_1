//WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT GIVEN
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float com;
    double sales;
    printf("This program will output the commission you will have to pay on your sales\nEnter your sales: ");
    scanf("%lf",&sales);
    if(sales>=0 && sales<500) {
        com = sales / 20;
    } else if(sales>=500 && sales<2000) {
        com = 35;
        sales = sales - 500;
        sales = sales / 10;
        com = com + sales;
    } else if(sales>=2000 && sales<5000) {
        com = 185;
        sales = sales - 2000;
        sales = sales * 12;
        sales = sales / 100;
        com = com + sales;
    } else if(sales>=5000) {
        com = sales;
        com = com * 125;
        com = com / 1000;
    }
    printf("The commission you will have to pay is %f",com);
        return 0;
}
