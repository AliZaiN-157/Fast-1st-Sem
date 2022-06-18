#include <stdio.h>

int main(){
	
	int a,b, i,j, temp, k=0;
	
	printf("Enter the length of array 1: ");
	scanf("%d", &a);
	
	printf("Enter the length of array 2: ");
	scanf("%d", &b);
	
	int arr1[a], arr2[b], merged[a+b];
	
	printf("Enter array1 elements: ");
	for(i=0; i<a ; i++){
		scanf("%d", &arr1[i]);
	}
	
	printf("Enter array2 elements: ");
	for(j=0; j<b; j++){
		scanf("%d", &arr2[j]);
	}
	
	for(i=0; i<a; i++){
		merged[k] = arr1[i];
		k++;
	}
	for(i=0; i<b; i++){
		merged[k] = arr2[i];
		k++;
	}
	
	for(i=0; i<a+b; i++){
		for(j=i+1; j<a+b; j++){
			if(merged[i] > merged[j]){
				temp = merged[i];
				merged[i] = merged[j];
				merged[j] = temp;
			}
		}
	}
	
	for(j=0; j<a+b; j++){
		printf("%d ", merged[j]);
	}
}
