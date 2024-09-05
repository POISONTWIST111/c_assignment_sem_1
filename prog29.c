//doubt
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,power_10,lol,temp_n;
    n = 1;
    temp_n = 0;
    lol = 0;
    int num[10];
    num[0] = num[1] = num[2] = num[3] = num[4] = num[5] = num[6] = num[7] = num[8] = num[9] = 0;
    printf("Enter your number: ");
    scanf("%d",&n);
    for(i=1;i<10;i++) {
        power_10 = 1;
        for(int f=0;f<i;f++) {
             power_10 = power_10*10;
            }
        num[i-1] = n%power_10;
        n = n - num[i-1];
        power_10 = power_10/10;
        num[i-1] = num[i-1]/(power_10);
    }
    for(i=0;i<10;i++) {
            for(int f=0;f<10;f++) {     //for removing zeros
                for(int j=9;j>f;j--) {
                temp_n = temp_n + num[j];//sum of last n terms
                }
                if(temp_n==0) {
                    lol = 1;
                    break;
                }

            }
            if(lol==1){
              break;
            }
        printf("%d",num[i]);
    }
    return 0;
}
