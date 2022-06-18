#include <stdio.h>

struct date{
	int day;
	int month;
	int year;
} d[2];

int main(){
	
	int i, a;
	for(i=0; i<2; i++){
		
		
		printf("\n Entry-[%d] \n", i+1);
		printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
		printf("\nEnter day: ");
		scanf("%d", &d[i].day);
		
		printf("Enter month: ");
		scanf("%d", &d[i].month);
		
		printf("Enter year: ");
		scanf("%d", &d[i].year);
		
		printf("%d/%d/%d \n", d[i].day, d[i].month, d[i].year);
		
	}
	
	a = (d[0].day == d[1].day && d[0].month == d[1].month && d[0].year == d[1].year) ? printf("\nEqual"): printf("\nUnequal"); 
	
}
