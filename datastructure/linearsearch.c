#include <stdio.h>
int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
    
}
int binarySearch(int arr[],int size,int element){
    int low,high,mid;
    low=0;
    high=size-1;
    while(low<=high)
    {
            mid=(low+high)/2;
            if(arr[mid]==element){
                return mid;
            }
            if(arr[mid]<element)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        
        
    }
    return -1;
}
int main()
{
    int arr[]={12,34,45,67,89,90,123};
    int size=sizeof(arr)/sizeof(int);
    int element=340;
    // int searchIndex=linearSearch(arr,size,element);
    int searchIndex=binarySearch(arr,size,element);
    printf("the element %d was found at index %d \n",element,searchIndex);
    return 0;
}