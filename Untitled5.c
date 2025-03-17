#include<stdio.h>

void convertToBinary(int number){
	
	if(number == 0){
		printf("0");
		return;
	}
	
	int index = 0;
	int arr[32];
	
	while(number > 0){
		arr[index] = number % 2;
		number = number / 2;
		index++;
	}
	
	for(index--;index>=0;index--){
		printf("%d",arr[index]);
	}
}

int main(){

	convertToBinary(-50);
	
	return 0;
}
