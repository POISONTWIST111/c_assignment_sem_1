// PROGRAM TO FINDOUT MAX AND MIN FROM NOS.
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,max,min,i;
    max = -32000;
    min = 32000;
    i = 0;
    printf("Enter a series of numbers and we will tell the maximum and minimum values.\n");
   while  (i < 20)  {
   i++;
   printf("Enter the numbers : \n");
   scanf("%d",&n);
   if (max>=n) {
   max = max;
   } else {
   max = n;
   }
   if (min>=n) {
   min = n;
   } else {
   min = min;
   }
   printf("maximum = %d\n",max);
   printf("minimum = %d\n",min);
   }
   return 0;
}
