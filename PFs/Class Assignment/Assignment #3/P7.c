#include <stdio.h>

int main(){
	
	int positives=0, negatives=0, zeros=0, num;
	char check;
	
	do{
		printf("Enter any real number: ");
		scanf("%d", &num);
		printf("Press y to continue and n to stop: ");
		scanf(" %c", &check);
		
		num == 0 ? zeros++ : ((num > 0) ? positives++ : negatives++);
		
	}while(check != 'n');
	
	printf("negative integers = %d \npostive integers = %d \nzeros = %d \n", negatives, positives, zeros);
	
	if ( positives > negatives && positives > zeros){
		printf("Positives have highest count");
	}
	else if (negatives > positives && negatives > zeros){
		printf("Negatives have highest count");
	}
	else {
		printf("Zeros have highest count");
	}
}
