#include <stdio.h>
int main()
{
    int num,i,j;
    int isprime=1;
    
    printf("Enter the number");
    scanf("%d",&num);
    for(j=2;j<num;j++)
    {
        for(i=2;i*i<j;i++)
    {
        if(j%i==0)
        {
            isprime=0;
        }
    }
     if(isprime)
    {
        printf("the number %d is prime \n",j);
    }
    isprime=1;
    }
   
   
    // else
    // {
    //     printf("the number %d is not prime",num);
    // }
    return 0;
}