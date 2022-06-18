#include <stdio.h>

int main(){
	int class1[5], class2[5],i,j, mark1;
	
	printf("Class 01 \n");
	for(i=0; i<=4; i++){
		printf("Enter marks: ");
		scanf("%d", &mark1);
		class1[i] = mark1;
	}
	printf("\n");
	
	printf("Class 02 \n");
	for(i=0; i<=4; i++){
		printf("Enter marks: ");
		scanf("%d", &mark1);
		class2[i] = mark1;
	}
	
	printf("common are: ");
	for(i=0; i<=4; i++){
		for(j=0; j<=4; j++){
			if(class1[i] == class2[j]){
				printf("%d, ",class1[i]);
			}
		}
	}
}
