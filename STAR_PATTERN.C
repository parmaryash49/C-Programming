#include <stdio.h>
int main()
{
    int i,j,num;
    printf("enter the number");
    scanf("%d",&num);

    for ( i = 0; i < num; i++)
    {
        for ( j = num; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}