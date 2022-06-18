#include <stdio.h>
// Write a function increment that increment the values of any integer array by 2.
// What i understand is user will give index number of arrray to increase.
void increment(int a[], int index, int len);
int main(){
	
	int n,i,i_num;
	
	printf("Enter the number of element: ");
	scanf("%d", &n);
	
	int array[n];
	
	printf("List of array you have: ");
	for(i=0; i<=n; i++){
		array[i] = (rand() %10) + 1;
		printf("%d ", array[i]);
	}
	
	printf("\nEnter the Index number you want to increment: ");
	scanf("%d", &i_num);
	
	increment(array,i_num,n);
}

void increment(int a[], int index,int len){
	
	int i;
	a[index] = a[index] + 2;
	printf("List of array you have (After increment) : ");
	for(i=0; i<=len; i++){
		printf("%d ", a[i]);
	}
}

