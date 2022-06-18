#include <stdio.h>

int main (){
	int rollno, digit1, digit2, flag, check_prime, i;
	
	scanf("%d", &rollno);
	
	if (rollno<999 || rollno >9999){
		printf("rollno invalid");
	}
	else {
		
		digit1 = rollno % 100;
		digit2 = rollno / 100;
	
		check_prime = digit1 * digit2;
		
		

	
		for(i=2; i<= check_prime/2 ; i++){
			if(check_prime % i == 0){
				flag++;
			}
		}
		if(flag == 0){
			printf("\n prime number");
		}
		else{
			printf("not a prime number");
		}
		
	}
	
	
}
