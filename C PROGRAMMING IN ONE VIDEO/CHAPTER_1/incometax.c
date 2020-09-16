#include <stdio.h>
int main()
{
    float income;
    float tax;
    printf("enter your salary");
    scanf("%f",&income);
    if(income>250000 && income <500000)
    {
        tax+=0.05*(income-250000);
    }
    else if (income>500000 &&income <1000000)
    {
        tax+=0.10*(income-500000);
    }
    else if (income>1000000)
    {
        tax+=0.30*(income-1000000);
    }
    else {
        printf("you dont need to pay any tax \n");
        
    }
    printf("you need to pay tax is %f",tax);

    return 0;
}