//PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
#include<stdio.h>

int main()
{
    int matrix[3][3];
    int save;
    printf("This program will give the transpose of the inputed matrix\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
        printf("Enter the number for Row %d:",i+1);
        scanf("%d",&matrix[i][j]);
        }
    }
    printf("Your matrix:\n");
    for(int i=0;i<3;i++) {
    printf("[");
        for(int j=0;j<3;j++) {
        printf(" %d ",matrix[i][j]);
        }
    printf("]\n");    
    }
    
    printf("\n\nThe transpose of the matrix: \n\n");
    save= matrix[0][1];
    matrix[0][1] = matrix[1][0];
    matrix[1][0] = save;
    save= matrix[0][2];
    matrix[0][2] = matrix[2][0];
    matrix[2][0] = save;
     save= matrix[1][2];
    matrix[1][2] = matrix[2][1];
    matrix[2][1] = save;
    for(int i=0;i<3;i++) {
        printf("[");
        for(int j=0;j<3;j++) {
            printf(" %d ",matrix[i][j]);
        }
    printf("]\n");    
    }
    return 0;
}