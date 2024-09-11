//PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include <stdio.h>

// Function to calculate factorial
double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int N;
    double sum = 0.0;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Calculate the sum of the series
    for (int i = 1; i <= N; i++) {
        sum += (double)i / factorial(i);
    }
    printf("The sum of the series is: %lf\n", sum);
    return 0;
}