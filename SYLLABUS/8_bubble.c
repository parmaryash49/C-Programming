#include <stdio.h>
int main()
{
    // initalize an array..
    int arr1[]={50,1,99,2,68,44,99,1,0};
    int i,temp;
    int Length  = sizeof(arr1)/sizeof(int);
    for ( i = 0; i < Length;i++)
    {
        for(int j=0;j<Length-i;j++){
            if(arr1[j]>arr1[j+1]){
                temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
      
    } 
    printf("sorted array:") ;
    for ( i = 0; i < Length; i++)
    {
        printf("%d \t",arr1[i]);
    }
    
    
      
    return 0;
}