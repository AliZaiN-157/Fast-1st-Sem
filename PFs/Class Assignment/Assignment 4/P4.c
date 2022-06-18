#include<stdio.h>

void display(int num[]);
int main(){
	
	int number[10], i, max, min, sum=0;
	
	max=number[0];
	min = number[0];
	for(i=0; i<=9; i++){
		printf("Enter the value %d: ", i+1);
		scanf("%d", &number[i]);
	}
	display(number);
	

}

void display(int num[]){
	
	int i, max, min, sum=0;
	max = num[0];
	min = num[0];
	for(i=0; i<=9; i++){
		sum += num[i];
		max = num[i] > max ? num[i]: max;
		min = num[i] < min ? num[i]: min;	
	}
	
	printf("sum of the array = %d\n", sum);
	printf("max value = %d\n", max);
	printf("min value = %d\n", min);
}

