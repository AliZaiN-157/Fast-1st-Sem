#include <stdio.h>
#include <conio.h>


int main(){
	
	int bit, test, p;
	
	printf("Enter any number : ");
	scanf("%d", &bit);
	p = 01001000;
	
	if (bit & p==p){
		test = bit | p ;
		printf("bit 5 and 3 are off %d \n", test);
		
	}
	else{
		printf("5 and 3 are already off");
	}
	
}
