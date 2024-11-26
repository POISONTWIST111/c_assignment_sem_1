//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING
//POINTER OF A VARIABLE CONTAINING THE ENTERED NUMBER.
#include <stdio.h>
#include <stdlib.h>
int main() {
    int num,*pntnum;
    scanf("%d",&num);
    pntnum = &num;
    printf("%d\n%d",*pntnum**pntnum,*pntnum**pntnum**pntnum);
    return 0;
}