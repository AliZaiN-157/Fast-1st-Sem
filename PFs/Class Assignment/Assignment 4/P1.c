#include<stdio.h>

void student(float a);
int main(){
	float mark1, mark2, mark3, sum;
	float per=0, avg=0;
	
	printf("Enter marks of subject 1: ");
	scanf("%f", &mark1);
	
	printf("Enter marks of subject 2: ");
	scanf("%f", &mark2);
	
	printf("Enter marks of subject 3: ");
	scanf("%f", &mark3);
	
	sum = mark1 + mark2 + mark3;
	student(sum);
}

void student(float a){
	
	float avg, per, total=30;
	
	avg = a/3;
	per = a/30 * 100;
	printf("Percentage = %.2lf \n", per);
	printf("Average = %.2lf", avg);
}
