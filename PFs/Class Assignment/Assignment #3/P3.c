#include<stdio.h>
#include<math.h>

int main(){
	
	int fac = 1, i, x, y, a, b, temp; 
	double sum = 1, wnum, Tseries=1;
	
	printf("Enter any whole number: ");
	scanf("%lf", &wnum);
		
	a = x = 42;
  	b = y = 98;

  	while (b != 0) {
    	temp = b;
    	b = a % b;
    	a = temp;
  	}
  	
  	printf("Series = 1 + ");
	for(i = 1; i < a; i++)
	{
		fac *= i;
		Tseries = (pow(wnum,i))/fac;
		sum += Tseries;
		printf("%.4lf + ",Tseries);
	}
	printf("\nSum of Taylor Series is: %.2lf",sum); // Not sure about answer
}
