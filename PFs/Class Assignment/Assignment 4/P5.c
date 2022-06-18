#include<stdio.h>
void sort(int *a, int len);
int main()
{
	int arr1[50], n, i;

	printf("Enter number of elements: ");
	scanf("%d", &n);

	printf("Enter %d integers: ", n);

  	for (i = 0; i < n; i++)
    	scanf("%d", &arr1[i]);


  	sort(arr1, n);

}

void sort(int *a, int len){
	
	int i,j,swap;
	
	for (i = 0 ; i < len - 1; i++){
    	for (j = 0 ; j < len - i - 1; j++){
      		if (a[j] > a[j+1]){
        		swap = a[j];
        		a[j] = a[j+1];
        		a[j+1] = swap;
      		}
    	}
  	}
  	printf("Sorted list in Ascending order:\n");

  	for (i = 0; i < len; i++)
     	printf("%d ", a[i]);
    
	for (i = 0 ; i < len - 1; i++){
    	for (j = 0 ; j < len - i - 1; j++){
      		if (a[j] < a[j+1]) {
        		swap = a[j];
        		a[j] = a[j+1];
        		a[j+1] = swap;
      		}
    	}
  	}
  	printf("\nSorted list in Desending Order:\n");

  	for (i = 0; i < len; i++)
     	printf("%d ", a[i]);
	
}
