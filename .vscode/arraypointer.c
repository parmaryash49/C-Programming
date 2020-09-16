#include <stdio.h>
int main()
{
    int arr[]={4,5,6,7,8};
    int *ptrarr=arr;
    printf("value of index 0 :%d \n",arr[0]);
    printf("addres of arr %d \n",&arr);
    printf("addres of ptrarr %d\n",ptrarr);
    printf("-------");

    printf("value of index 0 :%d \n",*(arr+1));
    printf("addres of arr %d \n",&arr+1);
    printf("addres of ptrarr %d",ptrarr +1);
    
    printf("value of index 0 :%d \n",arr+1);
    printf("addres of arr %d \n",*(&arr+1));
    printf("addres of ptrarr %d",*(ptrarr +1));
    

    
       
    return 0;
}