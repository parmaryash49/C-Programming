#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int *ptr;
    // printf("size of my integer %d",sizeof(int));
    // ptr=(int *)malloc(6*sizeof(int));
    // for(int i=0;i<6;i++){
    //     printf("Enter the value of %d element:\n ",i);
    //     scanf("%d",&ptr[i]);
    // }
    // for(int i=0;i<6;i++){
    //     printf("the vlue of %d is :%d \n",i,ptr[i]);
    // }
    float *ptr;
    ptr=(float *)malloc(4*sizeof(float));
    for(int j=0;j<4;j++){
        printf("Enter the value of %d element ",j+1);
        scanf("%f",&ptr[j]);
    }
    for(int j=0;j<4;j++){
        printf("The value of %d is %f \n",j+1,ptr[j]);
    }
    return 0;
}