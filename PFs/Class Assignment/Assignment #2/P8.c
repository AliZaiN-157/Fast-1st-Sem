#include <stdio.h>

int main(){
	
	int numeral, num1, num2, result=0, testcheck=0;
	char c1, c2;
	
	printf("How many characters are there in your Roman Number? ");
	scanf("%d", &numeral);
	
	switch(numeral){
		case 1:
			printf("Enter first character: ");
			scanf(" %c", &c1);
			
			switch(c1)
			{
			
				case 'M':
					num1 = 1000;
					break;
				
				case 'D':
					num1 = 500;
					break;
				
				case 'C':
					num1 = 100;
					break;
				
				case 'L':
					num1 = 50;
					break;
				
				case 'X':
					num1 = 10;
					break;
				
				case 'V':
					num1 = 5;
					break;
				
				case 'I':
					num1 = 1;
					break;
				
				default:
					printf("Invalid Roman Number");
			}
			printf("Decimal equivalent : %d", num1);
			break;
		
		case 2:
			printf("Enter first character: ");
			scanf(" %c", &c1);
			
			switch(c1)
			{
				case 'M':
					num1 = 1000;
					break;
				
				case 'D':
					num1 = 500;
					break;
				
				case 'C':
					num1 = 100;
					break;
				
				case 'L':
					num1 = 50;
					break;
				
				case 'X':
					num1 = 10;
					break;
				
				case 'V':
					num1 = 5;
					break;
				
				case 'I':
					num1 = 1;
					break;
				
				default:
					printf("Invalid Roman Number");
			}
			
			printf("Enter Second character: ");
			scanf(" %c", &c2);
			
			switch(c2){
				case 'M':
					num2 = 1000;
					break;
				
				case 'D':
					num2 = 500;
					break;
				
				case 'C':
					num2 = 100;
					break;
				
				case 'L':
					num2 = 50;
					break;
				
				case 'X':
					num2 = 10;
					break;
				
				case 'V':
					num2 = 5;
					break;
				
				case 'I':
					num2 = 1;
					break;
				
				default:
					printf("Invalid Roman Number");
			}
			
			if (num2 > testcheck){
				result += num2;
				testcheck = num2;
				if(num1 > testcheck){
					result += num1;
					testcheck = num1;
				}
				else{
					result -= num1;
				}
			}

			printf("Decimal equivalent is %d", result);
			break;
		
		default:
			printf("Invalid..! Try Again.");
	}
	
	
}
