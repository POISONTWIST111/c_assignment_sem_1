//WRITE A C PROGRAM TO FIND THE PRODUCT OF 2 MATRICES USING POINTER USING DYNAMIC
//MEMORY ALLOCATION.
#include<stdio.h>
#include<stdlib.h>

int main() {
    int *matrix[3],*matrix_1[3];

    for (int i = 0; i < 3; i++) {
        matrix[i] = (int*)malloc(3 * sizeof(int));
        matrix_1[i] = (int*)malloc(3 * sizeof(int));
    }

    printf("Enter the elements of the 3x3 matrix 1:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("Enter the elements of the 3x3 matrix 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("\nThe entered matrices are:\n");
    for (int i = 0; i < 3; i++) {
        printf("[\t");
        for (int j = 0; j < 3; j++) {
            printf("%d\t ", matrix[i][j]);
        }
        printf("]\t");
        printf("[\t");
        for (int j = 0; j < 3; j++) {
            printf("%d\t ", matrix_1[i][j]);
        }
        printf("]\n");
    }
    printf("\nThe Matrix multiplication of aboves matrices: \n");
    int matrix_2[3][3] = {0};
    int sum = 0;
    int n1,n2;
    for(int i=0;i<3;i++) {
        printf("[\t");
        for(int j=0;j<3;j++) {
            sum = 0;
            for(int k=0;k<3;k++) {
            n1 = (matrix[i][k]);
            n2 = (matrix_1[k][j]);
            sum += n1*n2;
            }
            printf("%d\t",sum);
        }
        printf("]\n");
    }
    

    for (int i = 0; i < 3; i++) {
        free(matrix[i]);
        free(matrix_1[i]);
    }
    return 0;
}
