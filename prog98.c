include<stdio.h>
#include<stdlib.h>
int main (void)
{
    int *ptr_1[3][3], *ptr_2[3][3], *ptr_3[3][3];
    printf("Enter matrix A\n");
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ptr_1[i][j]=malloc(sizeof(int));
            printf("Enter element (%i, %i ): ", i+1, j+1);
            scanf("%i", ptr_1[i][j]);
        }
    }
        printf("Enter matrix B\n");
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ptr_2[i][j]=malloc(sizeof(int));
            printf("Enter element (%i, %i ): ", i+1, j+1);
            scanf("%i", ptr_2[i][j]);
        }
    }
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            ptr_3[i][j]=malloc(sizeof(int));
        }
    }
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            *ptr_3[i][j] = 0;
            for(int k = 0; k<3; k++)
            {
                ptr_3[i][j] += ((ptr_1[i][k]))((ptr_2[k][j]));
            }
            printf("Element(%i, %i), of matrix A x B is %i\n", i+1, j+1, *ptr_3[i][j]);
        }
    }
    for(int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            free(ptr_1[i][j]);
            free(ptr_2[i][j]);
            free(ptr_3[i][j]);
        }
    }
}