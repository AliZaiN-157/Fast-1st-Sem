#include <stdio.h>
  
void sort(int n, int* ptr)
{
    int i, j, t;
  
    for (i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(ptr + j) > *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
  
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
    
    printf("\nSecond Largest: %d", *(ptr+1));
}
  
int main()
{
    int n, i;
    printf("Enter array length: ");
    scanf("%d", &n);
    int arr[n];
    
	for(i=0; i<n; i++){
		printf("Enter %d element: ", i+1);
		scanf("%d", &arr[i]);
	}
    sort(n, arr);
}
