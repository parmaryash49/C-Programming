#include <stdio.h>
void Mypower(int num,int power){
	int i=0;
	int result=1;
	for(i=0;i<power;i++){
		result=result *num;
	}
	printf("num=%d power%d",num,result);
}

void main(){
	int num,power,result;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the power");
	scanf("%d",&power);
	Mypower(num,power);
	// if(power==2){
	// 	result=num*num;
	// }
	// else if(power==3){
	// 	result=num*num*num;
	// }
	// printf("%d power %d is %d",num,power,result);

}