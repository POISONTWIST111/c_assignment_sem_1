// PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THE MATRICES AND STORE THEM IN THIRD MATRIX.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3];
    int matrix1[3][3];
    int matrix2[3][3];
    printf("PROGRAM TO READ A 3*3 MATRIX AND MULTIPLY THE MATRIX AND STORE THEM IN THIRD MATRIX.\n");
    printf("For Matrix 1\n\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
        printf("Enter the number for Row %d: ",i+1);
        scanf("%d",&matrix[i][j]);
        }
    }
    printf("\n\nFor matrix 2\n\n");
        for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
        printf("Enter the number for Row %d: ",i+1);
        scanf("%d",&matrix1[i][j]);
        }
    }
    printf("The matrix 1:\n");
    for(int i=0;i<3;i++) {
    printf("[");
        for(int j=0;j<3;j++) {
        printf(" %d ",matrix[i][j]);
        }
    printf("]\n");    
    }
    printf("\n\nThe matrix 2:\n\n");
    for(int i=0;i<3;i++) {
    printf("[");
        for(int j=0;j<3;j++) {
        printf(" %d ",matrix1[i][j]);
        }
    printf("]\n");    
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            matrix2[i][j] = matrix[i][0]*matrix1[0][j] + matrix[i][1]*matrix1[1][j] + matrix[i][2]*matrix1[2][j];
        }
    }
    printf("\n\nThe product of matrices is:\n\n");
        for(int i=0;i<3;i++) {
    printf("[");
        for(int j=0;j<3;j++) {
        printf(" %d ",matrix2[i][j]);
        }
    printf("]\n");    
    }

    return 0;
}