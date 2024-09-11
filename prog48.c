//    1
//   12
//  123 
// 1234
//12345
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,lol,dumb;
    printf("This program will print a pattern which looks like...\n    1\n   12\n  123\n 1234...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    n++;
    for(int i=1;i<n;i++) {
        dumb = 1;
        for(int j=0;j<i;j++) {
            printf("%d",dumb);
            dumb++;
        }
        printf("\n");
    }

    return 0;
}