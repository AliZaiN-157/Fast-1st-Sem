#include <stdio.h>

int main(){
	int num, i, j;
	char alphabets;
	
	printf("Enter any number: ");
	scanf("%d", &num);
	
	for(i = 0 ; i <= num ; i++){
		alphabets= 'a';
		for(j = 0 ; j <= i ; j++)
		{
			printf("%c", alphabets);
			
//			if (j != i){
				alphabets++;
//			}
//			else{
//				alphabets = 'a';
//				
//			}
		}
		printf("\n");
	}
	
}
