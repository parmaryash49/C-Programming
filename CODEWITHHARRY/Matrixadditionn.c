#include <stdio.h>
int  takematrix(int arr[][],int row,int column){
	int i=0,j=0;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	return 0;
}

void main(){
	int row,column;
	int arr[][];
	printf("Enter the row:");
	scanf("%d",&row);
	printf("Enter the column");
	scanf("%d",&column);
	takematrix(arr[][],row,column);
	// printmatrix(arr,row,column);

}