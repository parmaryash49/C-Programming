#include <stdio.h>
void main(){
	int num;
	int count=0;
	int rem;
	printf("Enter number\n");
	scanf("%d",&num);
	while(num>0){
		num=num/10;
		// printf("%d \n",rem);
		count=count+1;
		// printf("%d \n",count);
	}
	printf("%d",count);
}