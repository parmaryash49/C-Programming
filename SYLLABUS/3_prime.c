#include <stdio.h>
     int prime(int x,int d)
       {
             int y=2;
             while(y<d)
                   {
                       if(x%y==0)
                         {
                             break;
                         }
                      else
                        {
                             y=y++;
                        }
                    }
                      if(y==x)
                       {
                              return x;
                       }
      }



// int isprime(int num,int i){
//     if (i==1)
//     {
//         return 1;
//     }
//     else
//     {
//          if (num%i==0)
//         {
//             return 0;
//         }
//         else
//         {
//             return isprime(num,i-1);
//         }
//     }  
    
// }
int main()
{
    int num,i,temp,j,s,z;
    printf("enter number");
    scanf("%d",&num);

    for(z=2;z<num;z++)
    {
      s=0;
      i=z;
      s=prime(i,num);
      printf(" prime number are: %d \n  ",s);
    }

    //iterative method...
    // temp=0;
    // for(j=2;j<num;j++)
    // {
    //     for(i=2;i<j-1;i++){
    //         if(j%i==0){
    //             temp=1;
    //             break;
    //             // printf("number is prime %d",num);
    //         } 
            
    //     }
    //     if(temp==0){
    //         printf("numbe is prime %d \n",j);
    //     }
    //     temp=0;
    // }

    //recursion...
    // s=isprime(num,num/2);
    // if(s==1){
    //       printf("number is prime");
    // }
    // else
    // {
    //     printf("number is not prime");
    // }
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
  
    return 0;
}