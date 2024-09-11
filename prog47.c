//A
//AB
//ABC
//ABCD
//ABCDE
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,lol,dumb;
    printf("This program will print a pattern which looks like...\nA\nAB\nABC\nABCD...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    n++;
    for(int i=1;i<n;i++) {
        dumb = 65;
        for(int j=0;j<i;j++) {
            printf("%c",dumb);
            dumb++;
        }
        printf("\n");
    }

    return 0;
}