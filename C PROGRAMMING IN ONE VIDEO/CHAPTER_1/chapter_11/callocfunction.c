#include <stdio.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr=(float *)calloc(4,sizeof(float));
    // for(int j=0;j<4;j++){
    //     printf("Enter the value of %d element ",j+1);
    //     scanf("%f",&ptr[j]);
    // }
    for(int j=0;j<4;j++){
        printf("The value of %d is %f \n",j+1,ptr[j]);
    }
    return 0;

    
}