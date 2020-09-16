#include <stdio.h>
int main()
{
    int num,i,div,d;
    printf("enter the number");
    scanf("%d",&num);
    for(i=2;i<num/2;i++){
        if(num%i==0 ){
            d=num/i;
            div=i;
            printf("%d and divisor %d \n",div,d);
            break;
        }
    }
    return 0;
}