#include <stdio.h>

void per(double price, int i);
int main(){
	
	double price;
	
	printf("Enter the price: ");
	scanf("%lf", &price);
	
	per(price,1);
}

void per(double price,int i){
	
	double cal;
	
	if(i==100){
		return ;
	}
	cal= price * i/100;
	printf("%d percent = %.2lf\n", i,cal);
	per(price,++i);
	
}