#include <stdio.h>

struct Rectangle{
	
	float length;
	float width;
} rec1;

void cal(struct Rectangle rec1);
void check(struct Rectangle rec1);

int main(){
	
	printf("Enter Length of Rectangle: ");
	scanf("%f", &rec1.length);
	
	printf("Enter Width of Rectangle: ");
	scanf("%f", &rec1.width);
	
	check(rec1);
}

void check(struct Rectangle rec1){
	if((rec1.width > 0.0 && rec1.width < 20.0) && ((rec1.length > 0.0 && rec1.length < 20.0))){
		cal(rec1);
	}
}

void cal(struct Rectangle rec1){
	
	float perimeter, area;
	
	perimeter = (2 * rec1.length) + (2 * rec1.width);
	area = rec1.length * rec1.width;
	
	printf("Area : %.2lf \n", area);
	printf("Perimeter: %.2lf \n", perimeter);
}

