#include <stdio.h>

int main(){
	int numArr[3][4] = {
	{11, 22, 33, 44},
	{55, 66, 77, 88},
	{99, 110, 121, 132}
	};
	
//	printf("%d \n", sizeof(numArr));
	
	int col = sizeof(numArr[0])/sizeof(int);
	
	int row = sizeof(numArr)/sizeof(numArr[0]);
	
//	printf("%d \n", col);
//	printf("%d \n", row);

	for(int i = 0 ; i < row ; i++){
		for(int j = 0; j < col ; j++){
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}	
	
	for(int i = row-1 ; i >= 0 ; i--){
		for(int j = col-1; j >= 0 ; j--){
			printf("%d ", numArr[i][j]);
		}
		printf("\n");
	}
}