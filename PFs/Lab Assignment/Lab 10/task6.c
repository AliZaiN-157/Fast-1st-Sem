#include <stdio.h>

struct address{
	char street[50];
	char city[15];
	char state[10];
	int zipcode;
};

struct course{
	char course_name[20];
	float GPA;
};

struct student{
	float CGPA;
	struct course c1;
	struct address a1;
} student[2];

int main(){
	
	int i, h_cgpa, student;
	for (i= 0; i<2 ;i++){
		
		printf("Student %d: \n", i+1);
			
		printf("Enter your Overall CGPA: ");
		scanf("%lf", &student[i].CGPA);
		
		printf("Enter your course name: ");
		scanf("%s", student[i].c1.course_name);
		
		printf("Enter you course gpa: ");
		scanf("%lf", &student[i].c1.GPA);

		
		printf("Enter you street address: ");
		scanf("%s", student[i].a1.street);

		printf("Enter you city: ");
		scanf("%s", student[i].a1.city);
		
		printf("Enter you state: ");
		scanf("%s", student[i].a1.state);
		
		printf("Enter you zip code: ");
		scanf("%d", &student[i].a1.zipcode);
		
	}
	
//	for (i=0 ; i<2; i++){
//		h_cgpa = 0, student=0;
//		
//		if (student[i].CGPA > h_cgpa)
//			{
//				h_cpga = student[i].GPA
//				student = i;
//			}
//	}
//	printf("Highest CGPA : \n", h_cgpa);
//	printf("Student : \n",i+1);
	
	
	
}
