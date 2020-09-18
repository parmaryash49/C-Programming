#include <stdio.h>
int main(){
	int num=11112;
	int onum=num;
	int rev=0;
	int rem=0;
	printf("hello");
	while(onum!=0){
		rem=onum%10;
		rev=rev*10+rem;
		onum=onum/10;

	}
	printf("%d\n",num );
	printf("%d ",rev);
	if(num==rev){
		printf("number is palindrome\n",num );
	}
	else{
		printf("%d is not palindrome\n",num );
	}
}