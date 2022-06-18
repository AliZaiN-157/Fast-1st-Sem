#include <stdio.h>

int main() {
	
	float x1, x2, x3, x4, y1, y2, y3, y4;
	
	printf("Enter the coordinates of the first point (x1,y1): ");
	scanf("%f %f", &x1, &y1);
	
	printf("Enter the coordinates of the first point (x2,y2): ");
	scanf("%f %f", &x2, &y2);

	printf("Enter the coordinates of the first point (x3,y3): ");
	scanf("%f %f", &x3, &y3);

	printf("Enter the coordinates of the first point (x4,y4): ");
	scanf("%f %f", &x4, &y4);
	
	// Logic
	if ( ((y2 - y1)/(x2-x1)) == ((y3 - y2)/(x3 - x2)) ) {
		printf(" The given points fall on a straight line! ");
	}
	else{
		printf("The given points donot fall on a straight line!");
	}

}
