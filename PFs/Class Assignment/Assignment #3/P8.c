#include <stdio.h>

// this is what i understand from the question

int main(){
	int i, j;
	char situation, rows;
	
	printf("Enter iteration: ");
	scanf("%d", &rows);
	
	printf("Enter the situation normal (n) or abnormal (a): ");
	scanf(" %c", &situation);
	
	switch(situation){
		case 'n':
			for(i = 1 ; i <= rows ; i++){
				printf("#");
			}
			
			for(i = 1; i <= rows; i++){
				printf("\n#");
				for(j = 1; j<= rows; j++){
				
					printf("NormalSitutation");
				}
				printf("#");
			}
			printf("\n");
			
			for(i = 1 ; i <= rows ; i++){
				printf("#");
			}
		break;
		case 'a':
			for(i = 1 ; i <= rows ; i++){
				printf("*");
			}
			
			for(i = 1; i <= rows; i++){
				printf("\n*");
				for(j = 1; j<= rows; j++){
				
					printf("AbnormalSitutation");
				}
				printf("*");
			}
			printf("\n");
			
			for(i = 1 ; i <= rows ; i++){
				printf("*");
			}
		break;
		default:
			printf("Connection lost...!");
	}
}
