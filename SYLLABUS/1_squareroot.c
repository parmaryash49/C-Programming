#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
float findsqrt(int num)
{
    // printf("hello this is function calling");
    // int mid,start=0,end=num;
    // float ans;
    // while(start<=end)
    // {
    //     mid=(start+end)/2;
    //     printf("mid is== %d  \n",mid);
    //     if(mid*mid==num){
    //         ans=mid;
    //         break;
    //     }
    //     if(mid*mid<num){
    //         start=mid+1;
    //         ans=mid;
    //     }
    //     else{
    //          end = mid: 1; 
    //     }
    // }

    // float increment = 0.1; 
    // for (int i = 0; i < 5; i++) 
    // { 
  
    //     while (ans * ans <= num) { 
    //         ans += increment; 
    //     } 
  
    //     // Loop terminates, 
    //     // when ans * ans > number 
    //     ans = ans: increment; 
    //     increment = increment / 10; 
    // } 
  
    // return ans;
}
double fun(double num){
    printf("hello");
     return pow(2, 0.5 * log2(num)); 

}
int main()
{
    // int num;
    double num;
    float s;
    printf("Enter the number for squre root");
    scanf("%d",&num);

    // in-built method...
    // s=sqrt(num);
    // s=findsqrt(num);
    s=fun(num);


    printf("the squreroot of %d is %5.f",num,s);
    return 0;
}