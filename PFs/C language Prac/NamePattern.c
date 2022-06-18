#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	int i, j, len, space;
	
	printf("Enter Your Name: ");
	scanf("%s", str);
	len = strlen(str);
	
	for(i = 0 ; str[i] != '\0' ; i++){  // i <= len - 1
		for(space = 0; space <= len - 1 - i ; space++){
			printf("  ");
		}
		
		for(j=0; j <= i; j++){
			
//			if( i == 0 || j == 0){
//				printf("%c", toupper(str[0]));
//			}
//			else {
				printf("%4c", toupper(str[j]));
//			}
		}
		printf("\n");

	}
}
