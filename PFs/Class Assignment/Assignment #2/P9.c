#include <stdio.h>
#include <math.h>

int main(){
	
	int number, original_num, binaryNum=0, i=0, rem;
	int dec, decimalNum, dummy, base=1;
	
	printf("Enter the last 2 digit of your roll number: "); // 21k=4653
	scanf("%d", &number);
	
	original_num = number;
	
	if (number < 0 || number/ 100 != 0){
		printf("Invalid input. Please try again");
	}
	else{
		while (number > 0)
		{
				rem = number % 2;
			
				binaryNum += rem * pow(10,i);
			
				number /= 2;
				i++;
		}
		
		printf("Binary Number of %d is %d \n", original_num, binaryNum);
		
		dummy = binaryNum;
				
		while(binaryNum != 0)
		{
			dec = binaryNum % 10;
			decimalNum = decimalNum + dec * base;
			binaryNum = binaryNum / 10;
			base = base * 2;
		}
		
		printf("Decimal Number of %d is %d \n", dummy, decimalNum);
				
		if (decimalNum == original_num){
			printf("Hurrah !! your program is correct.");
		}
		else{
			printf(" sad :( ");
		}
	}
		
}
