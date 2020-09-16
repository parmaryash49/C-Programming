#include <stdio.h>
int main()
{
    int num;
    int rem;
    int a[10];
    int i=0;
    printf("enter the number in decimal");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%2;
        num=num/2;
        a[i]=rem;
        i++;
    }
    for(int j=i-1;j>=0;j--)      
    {
        printf("%d",a[j]);

    }
    return 0;
}