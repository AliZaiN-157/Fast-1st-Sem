#include <stdio.h>
#include <math.h>

int main(){
	
	int age, hyp, base, perp;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	for (hyp = 1 ; hyp <= age; hyp++){
		for (base = 1 ; base <= hyp; base++){
			for (perp = 1 ; perp <= base ; perp++){
				
				if (hyp == sqrt( pow(perp,2) + pow(base,2) )){
					printf("%d, %d, %d  \n", hyp, perp, base);
				}
				
			}
		}
	}
}
