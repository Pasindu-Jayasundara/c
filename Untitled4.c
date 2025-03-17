#include<stdio.h>

void convertToBinary(int number){
	
	if(number == 0){
		printf("0");
		return;
	}
	
	int binaryArr[32];
	int index = 0;
	
	while(number>0){
		binaryArr[index] = number%2;
		number = number / 2;
		index++;
	}
	
	for (index--; index >= 0; index--) {
        printf("%d", binaryArr[index]);
    }
}

int main(){
	convertToBinary(50);
	
	return 0;
}
