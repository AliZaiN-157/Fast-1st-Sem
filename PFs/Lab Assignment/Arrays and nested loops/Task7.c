#include <stdio.h>

int main(){
	int num[8], i, a, positive=0, negative=0, zero=0,sum=0;
	
	for(i=0; i<7; i++){
		printf("Enter Number: ");
		scanf("%d", &a);
		a > 0 ? positive++ : (a < 0 ? negative++: zero++);
		sum += a;
		num[i] = a;
	}
	
	printf("Total positive number: %d \n", positive);
	printf("Total Negative number: %d \n", negative);
	printf("Total Zeros: %d \n", zero);
	printf("Sum : %d \n", sum);
}
