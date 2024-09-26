// PROGRAM TO FINDOUT FRIST MAX AND SECOND MAX FROM AN ARRAY.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,max1,max2,i;
    int array[20];
    max1 = -32000;
    max2 = -32000;
    i = 0;
    printf("Enter a series of numbers and we will tell the first maximum and second minimum values.\n");
    while  (i < 20)  {
    printf("Enter the numbers : \n");
    scanf("%d",&array[i]);
    if (max1>=array[i]) {
         max1 = max1;
        if (max2>=array[i]) {
             max2 = max2;
         } else {
         max2 = array[i];
         }
    } else {
         max2 = max1;
         max1 = array[i];      
    }
    i++;
    }
    printf("first maximum = %d\n",max1);
    printf("second maximum = %d\n",max2);
   return 0;
}
