#include <stdio.h>
#include <stdlib.h>

//      *
//     **
//    ***
//   **** 
//  *****
int main() {
    int n;
    printf("This program will print a pattern which looks like...\n    *\n   **\n  ***\n ****...\nEnter the number of times you want this pattern to be print:\n");
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
        printf("\n");
    }

    return 0;
}