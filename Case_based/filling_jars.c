#include <stdio.h>

int main() {
    printf("Enter the numbers...\n");
    int n,m;
    scanf("%d %d",&n,&m);
    int average = 0;
    while(m--) {

        int a,b,k;
        scanf("%d %d %d",&a,&b,&k);
        int sum = (b - a + 1) * k;
        average += sum;
    }
    average = average / 5;
    printf("%d",average);
    return 0;
}