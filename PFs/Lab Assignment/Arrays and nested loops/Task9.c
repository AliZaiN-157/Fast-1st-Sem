#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	int i,num;
	
	double sum=0, avg;
	
	srand(time(0));
	
	printf("Enter No. Of element you want to store: ");
	scanf("%d", &num);
	
	if(num>0){
		float arr1[num];
		
		for(i=0; i<num; i++){
			arr1[i] = ((float) rand()/(float) (RAND_MAX)*1);
			
			printf("%lf \n",arr1[i]);
			
			sum += arr1[i];
			
		}
		
		avg = sum / num;
		
		printf("Average is: %f \n", avg);
		
		printf("Sum is : %f ", sum);
	}
	else{
		printf("Invalid Number");
	}
}
