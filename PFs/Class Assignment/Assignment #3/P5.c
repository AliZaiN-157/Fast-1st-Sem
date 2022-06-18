#include <stdio.h>
#include <math.h>

int main(){
	int R[2] ={1,3}, i; 
	float N, msd, dist, x2, y2; char ch = 'A';
	
	printf("Enter the Most significant digit of your Mobile number: ");
	scanf("%f", &msd);
	
	if (msd > 0  && msd <= 9){
		N = (pow(2,msd) * 0.0625);
		
		N = N + 3; // Why +3 because it will take atleast 3 references A, B and C .
		
		for(i=1; i <= N ; i++){
			printf("\nEnter X and Y coordinate of reference %c: ",ch);
			scanf("%f %f", &x2, &y2);
			dist = sqrt(pow(x2-R[0],2) + pow(y2-R[1],2));
			printf("Distance Between Camera and Robot is : %.2fm \n \n",dist);
			ch++;

		}
	}
	// Incase if msd == 0 then this condition will run
	else if (msd == 0){
		N = (pow(2,msd) * 4 + 3);
		
		N = N+3; // Why +3 because it will take atleast 3 references A, B and C .
		
		for(i=1; i <= N ; i++){
			printf("Enter X and Y coordinate of reference %d: ",i);
			scanf("%f %f", &x2, &y2);
			dist = sqrt(pow(x2-R[0],2) + pow(y2-R[1],2));
			printf("Distance Between Camera and Robot is : %.2fm\n",dist);
		}
	}
	else {
		printf("Number invalid...!");
	}
}
