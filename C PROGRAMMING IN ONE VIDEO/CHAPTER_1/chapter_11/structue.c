#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main()
{
    int a=34;
    float b=56.7;
    char c='c';

    struct employee e1;
    e1.code=100;
    e1.salary=3679.9;
    strcpy(e1.name,"kamesh");

    printf("%d \n",e1.code);
    printf("%f \n",e1.salary);
    printf("%s \n",e1.name);
    return 0;
}