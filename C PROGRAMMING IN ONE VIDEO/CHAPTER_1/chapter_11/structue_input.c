#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{

    struct employee e1,e2,e3;
    printf("Enter the code  of for code of e1");
    scanf("%d",&e1.code);
    printf("Enter the salary  of for code of e1");
    scanf("%f",&e1.salary);
    printf("Enter the name  of for code of e1");
    scanf("%s",&e1.name);

    printf("Enter the code  of for code of e2");
    scanf("%d",&e1.code);
    printf("Enter the salary  of for code of e2");
    scanf("%f",&e1.salary);
    printf("Enter the name  of for code of e2");
    scanf("%s",&e1.name);
   
    return 0;
}