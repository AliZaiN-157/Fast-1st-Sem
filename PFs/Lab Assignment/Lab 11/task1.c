#include<stdio.h>

void swap(int *a, int *b, int *c);
int main(){
	int num1, num2, num3;
	
	printf("Enter Number 1 : ");
	scanf("%d", &num1);
	
	printf("Enter Number 2 : ");
	scanf("%d", &num2);
	
	printf("Enter Number 3 : ");
	scanf("%d", &num3);
	
	
	swap(&num1, &num2, &num3);
	printf("number 1 = %d, number 2 = %d, number 3 = %d", num1, num2 , num3);
}

void swap(int *a, int *b, int *c){
	
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
