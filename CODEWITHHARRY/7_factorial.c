#include <stdio.h>
int main(){
	int num=4;
	int temp=1;
	while(num>0)
	{
		temp=temp*num;
		num--;
	}
	printf("%d",temp);
}