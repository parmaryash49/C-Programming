#include <stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    int n;
    printf("how many elements you want to enter:");
    scanf("%d",&n);
    ptr=(float *)calloc(n,sizeof(float));
    // for(int j=0;j<n;j++){
    //     printf("Enter the value of %d element ",j+1);
    //     scanf("%f",&ptr[j]);
    // }
    for(int j=0;j<n;j++){
        printf("The value of %d is %f \n",j+1,ptr[j]);
    }
    free(ptr);
    return 0;
}