#include<stdio.h>
#include<stdlib.h>  
//#include<time.h>

void CountFreq(int a[], int n);
int main(){
	
	int len, n, i;
	printf("Count of frequency of each element of an array: \n");
	printf("_______________________________________________________\n");
	
	printf("Enter the number: ");
	scanf("%d", &n);
	int array1[n];
	
	printf("Array[%d]: ", n);
	for(i=0; i<n; i++){
		array1[i] = (rand() %10) + 1;
		printf("%d ", array1[i]);
	}
	printf("\n");
	CountFreq(array1,n);
}
void CountFreq(int a[],int n){
	
	int check_freq[n], i, j, flag, testcheck=-1;
	for(i=0; i<n; i++){
		flag = 1;
		for(j=i+1; j<n; j++){
			if ( a[i] == a[j]){
				flag++;
				check_freq[j] = testcheck;
			}
		}
		if(check_freq[i] != testcheck)    
            check_freq[i] = flag;
	}
	printf("The frequency of all element of array: \n");
	for(i = 0; i < n; i++){    
        if(check_freq[i] != testcheck){    
            printf("%d occurs %d times \n", a[i],check_freq[i]);       
        }    
    } 
}

