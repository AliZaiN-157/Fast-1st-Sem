#include <stdio.h>

int main(){
	int i, num;
	
	printf("Enter any number: ");
	scanf("%d", &num);
	
	for (i=1; i<= num; i++){
		if(num % i == 0){
			printf("%d ", i);
		}
	}
	
}
