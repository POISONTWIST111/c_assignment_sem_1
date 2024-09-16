// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT SUM OF ALL ROWS
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3];
    int max1,max2,max3;
    printf("PROGRAM TO READ A 3*3 MATRIX AND FINDOUT SUM OF ELEMENTS OF A ROW.\n");
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
    max1 = matrix[0][0] + matrix[0][1] + matrix[0][2];
    max2 = matrix[1][0] + matrix[1][1] + matrix[1][2];
    max3 = matrix[2][0] + matrix[2][1] + matrix[2][2];
    printf("The sum of first row: %d\n",max1);
    printf("The sum of second row: %d\n",max2);
    printf("The sum of third row: %d\n",max3);
    return 0;
}