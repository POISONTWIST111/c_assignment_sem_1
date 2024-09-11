// CALCULATE PERCENTAGE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculating percentage\n");

    float M,P,C,CS,E,percent,total_marks;
    M = P = C = CS = E  = total_marks = 0;
    printf("Enter the total marks in each subject: ");
    scanf("%f",&total_marks);
    printf("Enter your marks in Maths: ");
    scanf("%f",&M);
    printf("Enter your marks in Physics: ");
    scanf("%f",&P);
    printf("Enter your marks in Chemistry: ");
    scanf("%f",&C);
    printf("Enter your marks in Computer science: ");
    scanf("%f",&CS);
    printf("Enter your marks in English: ");
    scanf("%f",&E);
    percent = M + P + C + CS + E;
    percent = percent*100;
    total_marks = total_marks*5;
    percent = percent/total_marks;
    printf("Your percentage is %f",percent);
    return 0;
    
}
