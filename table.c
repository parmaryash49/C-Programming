#include<stdio.h>
int main()
{
    int num,i;
    printf("enter the number:");
    scanf("%d",&num);
    // printf("------------");
    for ( i = 0; i <=10; i++)
    {
       printf("%d * %d = %d \n",num,i,num*i);
  
    }
    
   
    return 0;
}
