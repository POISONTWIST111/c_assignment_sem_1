//WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float M,P,C,E,CM;
    printf("This program will give your cutoff marks\n");
    printf("Marks in Maths out of 200: ");
    scanf("%f",&M);
    printf("Marks in Physics out of 200: ");
    scanf("%f",&P);
    printf("Marks in Chemistry out of 200: ");
    scanf("%f",&C);
    printf("Marks in Entrance exam out of 100: ");
    scanf("%f",&E);
    if (M <201&&C <201&&P <201&&E <101){
    CM = M + P + C;
    CM = CM/2;
    CM = CM + E;
    printf("Your cutoff marks are %f\n",CM);
    printf("The minimum cutoff marks were 275\n");
    if (CM >= 275){
        printf("Congratulations!!!      You qualified!!\n");
    } else {
        printf("Hard luck....    You did not qualify\n");
    }
    } else {
        printf("DONT JOOK AROUND!! GIVE THE ACTUAL MARKS!!");
    }

    return 0;
}
