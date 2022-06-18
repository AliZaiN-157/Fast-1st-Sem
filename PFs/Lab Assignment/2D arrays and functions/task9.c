#include <stdio.h>

int main(){
	int i, j; 
	double report[5][9], per, obt_marks=0.0;
	const double total_marks = 50.0;

	for(i=0; i<=4; i++){
		j = 6; // column 6 is total marks
		report[i][j] = total_marks;
	}
	
	// Input Marks from Users and calculate Obtain marks 
	for(i=0;i<=4;i++){
		printf("\nStudent - %d \n",i+1);
		printf("Enter your Student ID: ");
		scanf("%lf", &report[i][0]);
		obt_marks = 0;
		per = 0;
		for(j=1;j<=5; j++){
			printf("Enter C%d - Marks: ",j);
			scanf("%lf", &report[i][j]);
			
			// Calculating  Obtain Marks
			obt_marks +=report[i][j];
			report[i][7] = obt_marks; // 7 is obtain Mark column number
			
			// Calculating Percentages
			per = (report[i][7] / report[i][6]) * 100;
			report[i][8] = per;
		}
	}
	printf("ID | C1-Marks | C2-Marks | C3-Marks | C4-Marks | C5-Marks | Total Marks | Obtain Marks | Percentage\n");
	for(i=0; i<=4;i++){
		for(j=0; j<=8; j++){
			printf("%.1f |",report[i][j]);
		}
		printf("\n");
	}
}
