//    1
//   121
//  12321
// 1234321
//123454321
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,lol,dumb;
    printf("This program will print a pattern which looks like...\n    1\n   121\n  12321\n 1234321\n123454321...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    n++;
    lol = n;
    for(int i=0;i<n;i++) {
        lol--;
        dumb = 1;
        for (int k=lol;k>0;k--) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("%d",dumb);
            dumb++;
        }
        dumb = i;
        dumb--;
        for(int j=1;j<i;j++) {
            printf("%d",dumb);
            dumb--;
        }
        printf("\n");
    }

    return 0;
    return 0;
}