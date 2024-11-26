#include <stdio.h>
#include <stdlib.h>

int main() {

    int grade[] = {25,46,56,87,90};
    int *gradepnt = grade;
    for(int i=0;i<5;i++) {
        printf ("%d\t%p\n",grade[i],*gradepnt+i*sizeof(int));
    }

    int n = 5;
    int *intp = NULL;
    intp = &n;
    printf("%d\t%d\t%p\n",n,*intp,intp);
    *intp = 75;
    printf("%d\t%d\t%p\n",n,*intp,intp);
    int boom1 = 10;
    int boom2 = 20;
    int *pnt1;
    pnt1 = &boom1;
    int *pnt2;
    pnt2 = &boom2;
    printf("%p,%p,%p\n",sizeof(pnt1),sizeof(pnt2),sizeof(pnt1)+sizeof(pnt2));

    int arr[3] = {0};
    printf("Array size = %d\n",sizeof(arr));

    return 0;
}