// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=10;
//     int* ptra=&a;
//     int** c=&ptra;
//     int *e=&a;
//     int *d=NULL;
//     printf("Value of a %d \n",a);
//     printf("addreess of a %d \n",&a);
//     printf("%d \n",ptra);
//     printf("%d \n",*ptra);
//     printf("%d \n",&ptra);
//     printf("%d addrees e ",e);
//     printf("%d \n",c);
//     printf("%d \n",*c);
//     // Null pointer 
//     printf("%d \n",d);
//     printf("%p nothing",d);
//     printf("yash");

//     return 0;
// }
#include <stdio.h>
int main()
{
    int a=10;
    int *ptra=&a;
    int **ptraa=&ptra;
    int *c=NULL;
    printf("value of a %d \n",a);
    printf("address of a %d \n",&a);
    printf("address of a %d \n",*ptra);
    printf("address of ptr %d\n",&ptra);
    printf("value of ptraa %d",*ptraa);
    //null pointer
    printf("Null value of %d",&c);
    return 0;
}