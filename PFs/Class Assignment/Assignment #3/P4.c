#include <stdio.h>

int main(){
	int time_of_car1, time_of_car2;
	int n=1, meet;
	
	printf("Time taken by car 1: ");
	scanf("%d", &time_of_car1);
	
	printf("Time taken by car 2: ");
	scanf("%d", &time_of_car2);
	
	while(1){
		if (n % time_of_car1 == 0 && n % time_of_car2 == 0){
			meet = n;
			break;
		}
		n++;
	}
	
	printf("They will meet first at %d min", meet);
	
}
