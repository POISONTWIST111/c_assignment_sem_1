//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
#include <stdio.h>

int main()
{
    double double1,double2;
    char c;

    printf("Enter the Expression to get its solution: ");

    scanf("%lf%c%lf",&double1,&c,&double2);

    switch (c){
        case '+':
        printf("%f  +  %f = %f",double1,double2,double1 + double2);
        break;
        case '-':
        printf("%f  -  %f = %f",double1,double2,double1 - double2);
        break;
        case '*':
        printf("%f  *  %f = %f",double1,double2,double1 * double2);
        break;
        case '/':
        printf("%f  /  %f = %f",double1,double2,double1 / double2);
        break;
        default:
        printf("Error 404!!");
    }
    return 0;
}

