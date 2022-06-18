#include<stdio.h>

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
	
	struct student *p; 
	int i, j=0;
	for(i=0; i<2; i++){
		
		printf("Student %d: \n", i+1);
		
		printf("Enter your Overall CGPA: ");
		scanf("%f", &student[i].CGPA);
		
		printf("Enter your course name: ");
		scanf("%s", student[i].c1.course_name);
		
		printf("Enter you course gpa: ");
		scanf("%f", &student[i].c1.GPA);
		
		printf("Enter you street address: ");
		scanf("%s", student[i].a1.street);
		
		printf("Enter you city: ");
		scanf("%s", student[i].a1.city);
		
		printf("Enter you state: ");
		scanf("%s", student[i].a1.state);
		
		printf("Enter you zip code: ");
		scanf("%d", &student[i].a1.zipcode);
	}
	
	p = &student[i];
	printf("%d",student->a1.zipcode);
	j = student[0].CGPA > student[1].CGPA ? 0 : 1;
	printf("Max CGPA = Student %d with CGPA %.2f", j+1, student[j].CGPA);

}
