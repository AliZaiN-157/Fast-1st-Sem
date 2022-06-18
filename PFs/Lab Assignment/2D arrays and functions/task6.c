#include <stdio.h>

void getData();
double volumeCalc(float a, float b);
int main(){
	getData();
}

void getData(){
	
	double height, base;
	
	printf("Enter height: ");
	scanf("%lf", &height);
	
	printf("Enter base: ");
	scanf("%lf", &base);
	
	printf("volume of pyramid is: %.2lf", volumeCalc(height, base));
}

double volumeCalc(float a, float b){
	
	double volume;
	
	volume = b*b * 1/3 * a;
	
	return volume; 
}
