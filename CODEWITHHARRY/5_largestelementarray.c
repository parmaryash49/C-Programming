#include <stdio.h>

int returnMax(int a[],int n){
	int min=a[0];
	for (int i = 0; i < n; i++)		
	{
		if(a[i]<min){
			min=a[i];
		}	
	}
	a[0]=909;
	return min;
}
int main()
{
	int arr[]={123,12,3,56,78,90};
	int max=returnMax(arr,5);
	printf("maximum largest element is %d\n",max );
	for (int i = 0; i < 7; i++)
	{
		printf("%d \n",arr[i]);
	}

	return 0;
}