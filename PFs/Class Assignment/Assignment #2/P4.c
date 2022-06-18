#include <stdio.h>

int main(){
	
	int num, rollno, testcheck, last_digit, flag = 0;
	
	printf("Enter any 4 digit positive number: ");
	scanf("%d", &num);
	
	if (num < 0 || num / 10000 != 0){
		printf("Invalid input! Execute program again and then enter a valid integer");
	}
	else {
		
		printf("Enter the last character of your roll number: ");
		scanf("%d", &rollno);
			
		while(num != 0){
				
			testcheck = num % 10;
			if (testcheck == rollno){
				flag ++;
			}
			num/=10;
		}
			
		printf("%d occured %d times", rollno, flag);
	}
}
