// PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int matrix[3][3];
    int max1,max2,max3,ult_max;
    int min1,min2,min3,ult_min;
    printf("PROGRAM TO READ A 3*3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.\n");
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
    max1 = (matrix[0][0]>matrix[0][1] && matrix[0][0]>matrix[0][2])? matrix[0][0] : ((matrix[0][1]>matrix[0][2])? matrix[0][1] : matrix[0][2]);
    max2 = (matrix[1][0]>matrix[1][1] && matrix[1][0]>matrix[1][2])? matrix[1][0] : ((matrix[1][1]>matrix[1][2])? matrix[1][1] : matrix[1][2]);
    max3 = (matrix[2][0]>matrix[2][1] && matrix[2][0]>matrix[2][2])? matrix[2][0] : ((matrix[2][1]>matrix[2][2])? matrix[2][1] : matrix[2][2]);
    ult_max = (max1>max2 && max1>max3)? max1 : ((max2>max3)? max2 : max3);
    min1 = (matrix[0][0]<matrix[0][1] && matrix[0][0]<matrix[0][2])? matrix[0][0] : ((matrix[0][1]<matrix[0][2])? matrix[0][1] : matrix[0][2]);
    min2 = (matrix[1][0]<matrix[1][1] && matrix[1][0]<matrix[1][2])? matrix[1][0] : ((matrix[1][1]<matrix[1][2])? matrix[1][1] : matrix[1][2]);
    min3 = (matrix[2][0]<matrix[2][1] && matrix[2][0]<matrix[2][2])? matrix[2][0] : ((matrix[2][1]<matrix[2][2])? matrix[2][1] : matrix[2][2]);
    ult_min = (min1<min2 && min1<min3)? min1 : ((min2<min3)? min2 : min3);
    printf("The maximun value in the matrix is %d\n",ult_max);
    printf("The minimun value in the matrix is %d",ult_min);
    return 0;
}