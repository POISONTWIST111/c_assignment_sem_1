#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void bigger_and_greater(char s[]);
    int main() {
                
    printf("Enter the string: ");
    char cpu_destroyer[30];
    gets(cpu_destroyer);
    char swap;
    for(int i=0;i<strlen(cpu_destroyer)-1;i++) {
        for(int j=0;j<strlen(cpu_destroyer)-1;j++) {
            if(cpu_destroyer[j]>cpu_destroyer[j+1]) {
                swap = cpu_destroyer[j];
                cpu_destroyer[j] = cpu_destroyer[j+1];
                cpu_destroyer[j+1] = swap; 
            }
        }
    }
    puts(cpu_destroyer);
    printf("\n");

    return 0;
}

void bigger_and_greater(char s[]) {
    int n = 1;
    while (n--) {
    char s[100];
    gets(s);
    int n = strlen(s);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[n-i-1]>s[n-i-2])
        {
            index = n-i-2;
            break;
        }
    }
    
    if(index==-1) {
        printf("\n");
        continue;
    }

    char temp_char;
    int a;
    for (int i = index; i < n; i++)
    {
        if (s[i]>s[index])
        {
            temp_char = s[i]; 
            a = i;
        }
    }

    s[a] = s[index];
    s[index] = temp_char; 
    
    char temp3;
    for(int p = index+1; p < n-1; p++) {
        for (int i = index+1; i < n-1; i++)
        {
            if (s[i]>s[i+1])
            {
                temp3 = s[i];
                s[i] = s[i+1];
                s[i+1] = temp3;
            }
        }
    }

    puts(s);
        printf("\n");
}
}