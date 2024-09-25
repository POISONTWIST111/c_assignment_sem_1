//The annual examination results of 10 students are tabulated as follows:
#include <stdio.h>
#include <stdlib.h>

int marks_check(int number) {
    if (number>100 || number<0) {
        printf("Invalid value...\n CHEATING... This program won't continue...");
        return 1;
    }
}



int main() {
    int kill_program = 0;
    int marks[10][3];
    printf("This program will input the marks of students of roll number 1 to 10 (Out of hundred)\n");
    for (int i=0;i<10;i++) {
        printf("For Roll number %d\nMarks of Physics:",i+1);
        scanf("%d",&marks[i][0]);
        kill_program = marks_check(marks[i][0]);
        if (kill_program==1) {
            return 0;
        }
        printf("Marks of Chemistry:");
        scanf("%d",&marks[i][1]);
        kill_program = marks_check(marks[i][1]);
        if (kill_program==1) {
            return 0;
        }
        printf("Marks of maths:");
        scanf("%d",&marks[i][2]);
        kill_program = marks_check(marks[i][2]);
        if (kill_program==1) {
            return 0;
        }
    }
    printf("DONE");
    

    return 0;
}