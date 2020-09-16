// #include<stdio.h> 
// int fib(int n) 
// { 
//    if (n <= 1) 
//       return n; 
//    return fib(n-1) + fib(n-2); 
// } 
  
// int main () 
// { 
//   int n = 9; 
//   printf("%d", fib(n)); 
//   getchar(); 
//   return 0; 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num,temp=0;
    printf("enter the number you want fibonaci series.");
    scanf("%d",&num);
    num1=0;
    num2=1;
    while(num1<num){
        // printf("%d \n",num1);
        temp=num1+num2;
        num1=num2;
        num2=temp;


    }
    printf("the fibonai sereis  %d",temp);
    return 0;
}
