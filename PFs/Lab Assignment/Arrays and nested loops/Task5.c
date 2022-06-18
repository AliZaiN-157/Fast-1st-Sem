#include<stdio.h>

int main(){
	int base, exp, val=1, i;
	
	printf("Enter a base number: ");
	scanf("%d", &base);
	printf("Enter exponent number: ");
	scanf("%d", &exp);
	
	for(i=1; i<=exp; i++){
		val *= base;
	}
	printf("%d", val);
}
