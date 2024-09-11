//PROGRAM WHICH WILL WORK LIKE A BIG CALCULATOR USING SWITCH-CASE.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int int1,int2,ans;
    char c;
    ans = 1;

    printf("Enter the Expression to get its solution (ANS WILL BE INT NO MATTER WHAT): ");

    scanf("%ld%c%ld",&int1,&c,&int2);

    switch (c){
        case '+':
        printf("%ld  +  %ld  =  %ld",int1,int2,int1 + int2);
        break;
        case '-':
        printf("%ld  -  %ld  =  %ld",int1,int2,int1 - int2);
        break;
        case '*':
        printf("%ld  *  %ld  =  %ld",int1,int2,int1 * int2);
        break;
        case '/':
        printf("%ld  /  %ld  =  %ld",int1,int2,int1 / int2);
        break;
        case '^':
        for (int i=0;i<int2;i++) {
        ans = ans*int1;
        }
        printf("%ld  ^  %ld  =  %ld",int1,int2,ans);
        break;
        default:
        printf("Error 404!!");
    }
    return 0;
}


