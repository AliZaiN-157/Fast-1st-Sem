#include <stdio.h>

void sum(int *a[], int n);
int main(){
	int n, i, sum=0;
	int *ptr;
	
	printf("Enter length of array: ");
	scanf("%d", &n);
	
	int arr1[n];
	for(i=0; i<n; i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", &arr1[i]);
	}
	
	ptr = arr1;
	for(i=0; i<n ;i++){
		sum = sum + *ptr;
		ptr++;
	}
	printf("sum: %d", sum);
	

}
