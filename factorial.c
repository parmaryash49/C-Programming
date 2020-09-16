#include<stdio.h>
// int factorial(int  num){
//     if(num==1 || num ==0){
//         return 1;
//     }
//     else{
//         return num*factorial(num-1);
//     }
// }
int main()
{
    int  num,temp=1;
    printf("Enter the number");
    scanf("%d",&num);
    // printf("the factorial of %d is %d",num,factorial(num));

    // for(num;num>1;num--)
    // {
    //     temp=temp*(num);
           
    // }
    while(num>1){
        temp=temp*num;
        num=num-1;
    }
    printf("factorial is  %d",temp);
    return 0;
}
