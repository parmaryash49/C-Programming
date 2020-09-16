// #include <stdio.h>
// void display(int arr[],int n){
//     for(int i=0;i<n;i++){
//         printf("%d \n",arr[i]);
//     }
// }
// int sortedInsertion(int arr[],int size,int element,int capacity,int index)
// {
//     if(size>=capacity){
//         printf("element can not be inseted...\n");
//         return -1;
//     }
//     else
//     {
//         for(int i=size-1;i>=index;i--)
//         {
//             arr[i+1]=arr[i];
//         }
//         // for(int i=0;i<=index;i++){
//         //     arr[i-1]=arr[i];
//         // }
//     arr[index]=element;
//     return 1;

//     }
     

// }
// int main()
// {
//     int arr[3]={1,2,6};
//     int size=3, element=50,index=2;
//     // display(arr,4);
//     sortedInsertion(arr,size,element,3,index);
//     size+=1;
//     display(arr,size);
//     return 0;
// }
#include<stdio.h>


void display(int arr[], int n){
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}

int inddeletion(int arr[], int size, int index)
{
    // code for Insertion
   
    for (int i = index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
}

int main(){
    int arr[7] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index=0;
    display(arr, size); 
    inddeletion(arr, size, index);
    size -=1;
    // if(size==5){
    //    printf("inserted not successfull..."); 
    // }
    display(arr, size);
    
   
    return 0;
}