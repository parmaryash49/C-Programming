#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int temp;
    temp = a;
    printf("a value is %d \n",a);
    printf("a address is %d \n",&a);
    printf("b value is %d \n",b);
    printf("b address is %d \n",&b);
    temp=b;
    b = a;
    a = temp;
    printf("%d a value \n", a);
    printf("%d a address \n", &a);
    printf("%d b value \n", b);
    printf("%d b address \n", &b);
    return 0;
}