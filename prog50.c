//A
//BB
//CCC
//DDDD
//EEEEE
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,lol,dumb;
    printf("This program will print a pattern which looks like...\nA\nBB\nCCC\nDDDD...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    n++;
    dumb = 65;
    for(int i=1;i<n;i++) {
        for(int j=0;j<i;j++) {
            printf("%c",dumb);
        }
        dumb++;
        printf("\n");
    }

    return 0;
}