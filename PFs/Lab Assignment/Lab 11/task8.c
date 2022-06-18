#include<stdio.h>

int main(){
	int setA[5]={2,3,4,5,6}, setB[5]={2,4,6,8,10}, i, j, setAUB[10], n = 0 ,setAIB[5], m = 0, same;
	int *pA = setA, *pB = setB;
	
	printf("Set A = ");
	for(i=0; i<5;i++){
		printf("%d ", *(pA+i));
	}
	printf("\n");
	
	printf("Set B = ");
	for(i=0; i<5;i++){
		printf("%d ", *(pB+i));
	}
	printf("\n\n");

	// Intersection
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if (*(pA + i) == *(pB + j)){
				setAIB[m] = *(pA + i);
				m++;
			}
		}
	}
	printf("A Intersection B = ");
	for(i=0; i<m;i++){
		printf("%d ", setAIB[i]);
	}
	printf("\n");
	
	
	// Union
	for(i=0;i<5;i++){
		setAUB[n++] = *(pA + i);
	}
	for(i=0; i<5; i++){
		same = 0;
		for(j=0; j<5; j++){
			if(*(pB + i) == setAUB[j]){
				same = 1;
				break;
			}
		}
		if(same == 0){
			setAUB[n]= *(pB+i); 
   			n++;
		}
	}
	
	printf("A Union B = ");

	for(i=0; i<n;i++){
		printf("%d ", setAUB[i]);
	}
}
