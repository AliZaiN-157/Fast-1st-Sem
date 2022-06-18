#include <stdio.h>

int main(){
	
	int s1, s2, s3, s4;
	int a1, a2, a3, a4;
	
	printf("Enter all the side of quadrilateral: ");
	scanf("%d", &s1);
	scanf("%d", &s2);
	scanf("%d", &s3);
	scanf("%d", &s4);
	
	printf("Enter all the angle of quadrilateral: ");
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	scanf("%d", &a4);
	
	if (a1+a2+a3+a4 == 360){
		
		if ((s1 == s2) && (s3 == s4) && (s1 == s3) && (a1 == a2) && (a3 == a4) ){
			printf("Square");
		}
		else if ((s1 == s3) && (s2 == s4) && (s1 != s2) && (a1 == a2) && (a3 == a4)){
			printf("Rectangle");
		}
		else if ((s1 == s3) && (s2 == s4) && (s1 != s2) && (a1+a3 == 180) && (a2 + a4 == 180)){
			printf("Parallelogram");
		}
		else if ((s1 == s2) && (s3 == s4) && (a1 == a3) && (a2 == a4)){
			printf("Kite");
		}
		else if ((s1 == s2) && (s3 == s4) && (s2 == s3) && (a1+a3 == 180) && (a2 + a4 == 180) ){
			printf("Rhombus");
		}
		else if ((s1 != s2) && (s2 != s3) && (s1 != s3) && (a1 != a2) && (a1 == a4) && (a1 != a3)){
			printf("Trapezoid");
		}
		else{
			printf("There is no such Quadrilateral");
		}
	}
	else{
		printf("total of all angles is lesser than or greater than 360")
	}

}
