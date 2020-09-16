#include <stdio.h>
int main(int argc, char const *argv[])

{
    int num;
    while (num != 6)
    {
        printf("1:Kms to foot \n");
        printf("2:inches  to foot\n");
        printf("3:cms to inches\n");
        printf("4:pound to kg\n");
        printf("5:inches  to meters\n");
        printf("6: for quit the program\n");
        printf("Enter the number which operation you want to perform:");
        scanf("%d", &num);
        if (num == 6)
        {
            goto end;
        }

        if (num == 1)
        {
            int km;
            float temp;
            //  temp;
            // 1 km	3280.84 ft
            printf("pls enter the value of km");
            scanf("%d", &km);
            temp = km * 3280.84;
            printf("Conversion of %d Kilomete to foot is  %10.4f \n", km, temp);
        }
    }
end:
    printf("close the program");

    return 0;
}
