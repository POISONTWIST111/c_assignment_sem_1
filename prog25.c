//PROGRAM TO PRINT TABLE OF ANY NO
#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number, and get the table of that number: ");
    scanf("%d",&a);
    for (int i=1;i<11;i++) {
    printf(" %d  *  %d =  %d\n",a,i,a*i);
    }
    
    return 0;
}
