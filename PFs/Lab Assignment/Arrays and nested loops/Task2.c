#include <stdio.h>

int main(){
	int max=0,min=10,i, mark, marks[10];
	
	for(i=0; i<=9; i++){
		printf("Enter quiz marks: ");
		scanf("%d", &mark);
		mark = mark >= 10 ? printf("Invalid\n"): mark;
		
		marks[i] = mark;
		max = mark > max ? mark: max;
		min = mark < min ? mark: min;
	}
	for(i=0; i<=9; i++){
		printf("Quiz score: %d \n", marks[i]);
	}
	printf("max : %d \n", max);
	printf("min : %d \n", min);
}
