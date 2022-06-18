#include <stdio.h>

int main(){
	
	int num, ReversedNum=0, remainder, OriginalNum;
	
	printf("Enter any 5 digit positive number: ");
	scanf("%d", &num);
	
	if (num < 0 || num / 10000 == 0 || num > 1000000){
		printf("Error! Invalid input. Please try again");
	}
	else {
			OriginalNum = num;
						
			while(num != 0){
				remainder = num % 10;
				ReversedNum = ReversedNum * 10 + remainder;
				num/=10;
			}
			
			if (ReversedNum == OriginalNum){
				printf("%d is palindrome", OriginalNum);
			}
			else {
				printf("%d is not palindrome", OriginalNum);
			}

	}
}
