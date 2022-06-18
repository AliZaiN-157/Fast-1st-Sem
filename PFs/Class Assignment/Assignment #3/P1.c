#include <stdio.h>
#include <math.h>

int main(){
	
	int num, rem, octnum=0, i=0;
	
	printf("Enter DoB: ");
	scanf("%d", &num);
	
	while(num != 0){
		rem = num % 8;
		octnum = octnum + rem * pow(10,i);
		num /= 8;
		i++;
	}
	printf("Octal Number: (%d)", octnum);
}
