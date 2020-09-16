#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the number that you want the sum");
    // iterative style..
    scanf("%d",&n);
    // for(i=0;i<num;i++){
    //     sum=sum+i;
    // }
    //constant time...
    sum=((n*n)+n)/2;
    printf("the sum of %d is %d",n,sum);
    
    return 0;
}