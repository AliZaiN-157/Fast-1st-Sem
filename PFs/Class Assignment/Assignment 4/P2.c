#include <stdio.h>

int sum(int a);
int main(){
	int num, SUM, digits;
	
	printf("Enter 5 Digit number: ");
	scanf("%d", &num);
	
	(int) log10(num) + 1 == 5 ? printf("sum: %d", sum(num)) : printf("Invalid Entry"); // to check digits are 5 or greather than 5.
}

int sum(int a){
	
	if (a > 0)
       return a%10 + sum(a/10);
	else   
		return 0;
}
