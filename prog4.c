#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temp;
    printf("Fahrenheit to Celcius\n\n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf",&temp);
    temp = temp - 32;
    temp = temp*5;
    temp = temp/9;
    printf("The temperature in celcius is: %lf",temp);
    return 0;
}
