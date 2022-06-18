#include <stdio.h>

int main(){
	
	double i, n, limit, seq= 0, sum;
	
	scanf("%lf", &limit);
	printf("Sequence: ");
	for(n=1; n<=limit ; n++){
		 seq = 1/n;
		 printf("%.2lf + ", seq);
		 sum += seq;
	}
	printf("\nSum = %.5lf", sum);
}
