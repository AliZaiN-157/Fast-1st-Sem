#include<stdio.h>
#include<math.h>
#define PI 3.14159265

void Area(float t[6][3]);

int i,j;
int main(){
	float table[6][3]={
	{137.4,80.9,0.78},
	{155.2,92.62,0.89},
	{149.3,97.93,1.3},
	{160.0,100.25,9.00},
	{155.6,68.25,1.25},
	{149.7,120.0,1.75}
	};
	
	Area(table);
}

void Area(float t[6][3]){
	
	float Area, Max=0.0;
	
	for(i=0; i<6; i++){
		Area = (1.0/2) * (t[i][0] * t[i][1]) * (sin(t[i][2]));
		Max = Area > Max ? Area : Max;

		printf("Plot No.%d has Area = %.2lf \n", i+1,Area);
	} 
	
	printf("Maximum Area: %.2lf", Max);
}

