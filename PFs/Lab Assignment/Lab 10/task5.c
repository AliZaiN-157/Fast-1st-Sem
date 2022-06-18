#include <stdio.h>

struct phone {
	
	int area_code;
	int exchange;
	int number;
} p1;

int main(){
	
	printf("Enter Area code: ");
	scanf("%d", &p1.area_code);
	
	printf("Enter exchange: ");
	scanf("%d", &p1.exchange);
	
	printf("Enter number: ");
	scanf("%d", &p1.number);
	
	printf("(%d) %d-%d", p1.area_code, p1.exchange, p1.number);

}
