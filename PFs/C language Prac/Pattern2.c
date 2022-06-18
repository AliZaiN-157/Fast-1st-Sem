#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char str[20];
	int i, j, len, a;
	
	printf("Enter Your Name: ");
	scanf("%s", str);
	len = strlen(str);
	
	for(i = 0 ; i < (2*len + 1) ; i++){ 
		
		if(i < len) {
			a = i;
		}
		else{
			a = abs(2*len - i);
		}
		
		for(j=0; j <= a; j++){
			printf("%c", toupper(str[j]));
			
		}
		printf("\n");

	}
}
