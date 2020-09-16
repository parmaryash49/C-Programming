#include <stdio.h>
// void printarray(int *ptr,int n){
//     for(int i=0;i<n;i++){
//         printf("the value of %d is %d \n",i+1,*(ptr+i));
//     }
// }

void printarray(int ptr[],int n){
    for(int i=0;i<n;i++){
        printf("the value of %d is %d \n",i+1,ptr[i]);
    }
}
int main()
{
    int arr[]={10,23,34,56};
    printarray(arr,4);
    return 0;
}