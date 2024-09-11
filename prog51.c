//10000
//01000
//00100
//00010
//00001
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,lol,dumb;
    printf("This program will print a pattern which looks like...\n10000\n01000\n00100\n00010\n00001...\nEnter the number of times you want this pattern to be print:\n");
    scanf("%d",&n);
    dumb = 0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(dumb==j){
                printf("1");    
            } else {
                printf("0");
            }
        }
        dumb++;
        printf("\n");
    }
    return 0;
}