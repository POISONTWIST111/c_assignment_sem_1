/*WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER
,EMPLOYEE NAME AND BASIC PAY OF THE EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN
ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE DETAILS AND
PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    char name[30];
    char number[8];
    long int salary;
    
};

void information(char name[30],char number[8],long int salary);

int main() {

    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    getchar();
    int temp = n;
    struct  Employee worker[n];
    while(n--) {
    // printf("Enter the number of Employees to be read: ");
    // scanf("%d",n);
    // struct Employee *pnt_Employee[n] = (struct*) malloc(sizeof(int) * n);
    char input_name[30];
    printf("Enter Name: ");
    gets(input_name);
    strcpy(worker[n].name,input_name);
 
    char input_rollno[8];
    printf("Enter ID: ");
    gets(input_rollno);
    strcpy(worker[n].number,input_rollno);
 
    printf("Enter your wages: ");
    scanf("%ld",&worker[n].salary);
    getchar();
    }
    
    while(temp--)
    information(worker[temp].name,worker[temp].number,worker[temp].salary);

    return 0;
}
 
void information(char name[30],char number[8],long int salary) {
        printf("Name: %s\nID: %s\nWages: %d\n\n",name,number,salary);
    }