#include<stdio.h>

int f_series(int n);

int main(){
  	int n, a = 1, i;

	printf("Enter the number of terms: ");
  	scanf("%d", &n);

  	printf("Fibonacci series terms are:\n");

  	for (i = 1; i <= n; i++)
  	{
    	printf("%d ", f_series(a));
    	a++;
  	}
}

int f_series(int n){
  	if (n == 0 || n == 1)
    	return n;
  	else
    	return (f_series(n-1) + f_series(n-2));
}
