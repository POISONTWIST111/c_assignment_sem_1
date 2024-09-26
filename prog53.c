#include <stdio.h>
#include <stdlib.h>

//      *
//     ***
//    *****
//   *******
//  *********

int main() {
    int n;
    printf("This program will print a pattern which looks like...\n    *\n   ***\n  *****\n *******...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    n++;
    char boom = '*';
    for(int i=1;i<n;i++) {
        for (int k=n;k>i;k--) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("%c",boom);
        }
        for(int f=0;f<(i-1);f++) {
            printf("%c",boom);
        }
        printf("\n");
    }
    n-=2;
    int q = 2;
    for(int i=n;i>0;i--) {
        for (int k=0;k<q;k++) {
            printf(" ");
        }
        for(int j=0;j<i;j++) {
            printf("%c",boom);
        }
        for(int f=0;f<(i-1);f++) {
            printf("%c",boom);
        }
        printf("\n");
        q++;
    }

    return 0;
}