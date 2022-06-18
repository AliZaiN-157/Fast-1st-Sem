#include <stdio.h>

int main(){
	unsigned int number;
	
	int result, position;
	
	printf("Enter the positive integer: ");
	scanf("%d", &number);
	
	printf("Enter the position to be searched: ");
	scanf("%d", &position);
	
	result = (number >> (position));
	
	if (result & 1){
		printf("result = %d", result);
	}
	else {
		printf("result = %d", result);
	}
}
