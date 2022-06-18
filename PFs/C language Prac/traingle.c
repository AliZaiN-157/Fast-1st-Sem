#include <stdio.h>

int main(){
	int i, j, rows, space=1;
	char star='*';
	
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	
	for( i = 0 ;  i < rows ; i++ ){
		for( space = 1 ; space <= rows - i ; space++){
			printf(" ");
		}
		for(j = 0; j <= i; j++){	
			printf("%c", star);
		}
		printf("\n");
	}
	
	
}
