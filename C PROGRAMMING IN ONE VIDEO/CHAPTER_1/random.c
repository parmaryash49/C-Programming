#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(0));
    int n=6935%6;
    printf("%d \n",n);
    int num=rand();
    printf("num is %d \n",num);
    num=num%6;
    printf("after update %d",num);
    
    return 0;
}