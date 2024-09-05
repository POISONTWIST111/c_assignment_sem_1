#include <stdio.h>
#include <stdlib.h>

int main()
{
     double  package,r,pf,tax,g_income;
    package = pf = r = 0;
    printf("Enter your 'On paper income' of a month: ");
    scanf("%lf",&package);
    printf("What percent cut of your salary goes to the P.F: ");
    scanf("%lf",&r);
    pf = package;
    r = r/100;
    pf = pf*r;
    tax = package *0.3;
    tax = tax + pf;
    g_income = package - tax;
    g_income = g_income*12;
    printf("After deducting the P.F and income tax your gross annual salary is %lf",g_income);

    return 0;
}
