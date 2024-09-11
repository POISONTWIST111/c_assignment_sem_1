//PROGRAM TO READ MARKS OF FIVE SUBJECTS AND PRINT DIVISION
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M,P,C,CS,E,divi,total_marks;
    M = P = C = CS = E  = total_marks = 0;
    printf("This program will calculate your average marks.\n");
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
    total_marks = M + P + C + CS + E;
    divi = total_marks;
    divi = divi/5;
    printf("Your average score is: %.1f",divi);
    
    return 0;
}
