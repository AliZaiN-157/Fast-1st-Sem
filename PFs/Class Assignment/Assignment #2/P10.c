#include <stdio.h>

int main(){
	int num, encrypted, decrypted, d1, d2, d3, d4;
	int a, b, c, d;
	
	printf("Enter any 4 digit integer: ");
	scanf("%d", &num);
	
	if (num < 0 || num <= 1000  || num >= 9999){
		printf("Invalid Input..! try again");
		
	}
	else {
			d1 = num / 1000;
			d2 = (num % 1000) / 100;
			d3 = (num % 100) / 10;
			d4 = num % 10; 
			
			// for encrypted
			
			a = ( d1 + 5 ) % 8;
			b = ( d2 + 5 ) % 8;
			c = ( d3 + 5 ) % 8;
			d = ( d4 + 5 ) % 8;	
			
			encrypted = b * 1000 + a * 100 + d * 10 + c;
			
			// for decrypted 
			
			d1 = encrypted / 1000;
			d2 = (encrypted % 1000) / 100;
			d3 = (encrypted % 100) / 10;
			d4 = encrypted % 10;
			
			 	
			a = ( d1 % 8 ) + 3 ; // or (d1 + 8) - 5 will also give you the same result.
			b = ( d2 % 8 ) + 3 ;
			c = ( d3 % 8 ) + 3 ; 
			d = ( d4 % 8 ) + 3 ; 	
			
			decrypted = b * 1000 + a * 100 + d * 10 + c;
			
			printf(" The encrypted integer is %d \n", encrypted);
			printf(" The decrypted integer is %d \n", decrypted);
		
		if (decrypted == num){
			printf("The data before encryption and after decryption is the same. Congrats !");
		}
		else {
			printf("The data before encryption and after decryption is not the same. Troubleshoot your code..!");

		}
	}
}
