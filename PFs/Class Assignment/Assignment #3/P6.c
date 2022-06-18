#include <stdio.h>
#include <ctype.h>

int main(){
	int age, i = 0; 
	char city;
	
	for (; i <=10 ; i++){
		printf("Enter your age: ");
		scanf("%d", &age);
		
		printf("Enter city U for urban and R for rural: ");
		scanf(" %c", &city);
		
		city = tolower(city);
		
		if (age >= 18 && city == 'u'){
			printf("You are eligible for a vaccination..! \n\n");
		}
		else if (age < 18 && city == 'r'){
			printf("You are not eligible for a vaccination..! \n\n");
		}
		else {
			printf("Details provided is invalid \n\n");
		}
	}
}
