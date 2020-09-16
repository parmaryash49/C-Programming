#include <stdio.h>
int main()
{
    int arr[] = {20, 1, 90, 34, 45, 0};
    int len = sizeof(arr) / sizeof(int);
    int i, temp = 0;
    int min_value = arr[0];
    printf("%d \n", min_value);
    for (i = 1; i < len; i++)
    {

        if (arr[i] < min_value)
        {
            temp = min_value;
            min_value = arr[i];
            arr[i] = temp;
        }
    }

    printf("sorted array:");
    for (i = 0; i < len; i++)
    {
        printf("%d \t", arr[i]);
    }

    return 0;
}