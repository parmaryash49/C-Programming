#include <stdio.h>
#include <string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee emp){
    printf("the code is:%d",emp.code);
}
int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr=&e1;
    // (*ptr).code=101;
    ptr->code=102;
    printf("%d",e1.code);

    ptr=&e1;
    show(e1);
       
    return 0;
}