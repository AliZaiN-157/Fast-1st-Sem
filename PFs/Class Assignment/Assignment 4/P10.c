#include<stdio.h>
#include<string.h>

search_roll(char **name, float marks[7], int roll[7]){
	
	int temp, i, num;
	printf("Enter roll number: ");
	scanf("%d", &num);
	for(i = 0; i < 7; i++){
		if(num == roll[i]){
		temp = i;
		}
	}
	printf("Name: %s", *(name+temp));
	printf("\nMarks: %.1f", marks[temp]);
	printf("\nRoll: %d", roll[temp]);
}
search_name(char **name, float marks[7], int roll[7]){
	
	int temp, i;
	char n[10];
	printf("Enter name: ");
	scanf("%s", n);
	for(i = 0; i < 7; i++){
		if(strcmp((*(name+temp)), n)){
		temp = i;
		}
	}
	printf("Name: %s", *(name+temp));
	printf("\nMarks: %.1f", marks[temp]);
	printf("\nRoll: %d", roll[temp]);
}

int *sort(float marks[], char **name, int roll[]) {

	int size = 7;
	int step, i;
  	for (step = 0; step < size - 1; ++step) {
      

    for (i = 0; i < size - step - 1; ++i) {
         
      if (marks[i] > marks[i + 1]) {
        
        
        float temp = marks[i];
        marks[i] = marks[i + 1];
        marks[i + 1] = temp;
        char *t = *(name + i);
        name [i]= name [1 + i];
        name[i + 1] = t;
        int tem = roll[i];
        roll[i] = roll[i + 1];
        roll[i + 1] = tem;
      }
    }
  }
  
}

int main(){
	int n, num, *sorted, i;
	char *name[7] = {"Salman", "Zubair", "Ahsan" , "Farah", "Hassan", "Kamran", "Mariyum"};
	float marks[7] = {75.5, 80, 64, 78, 65, 54, 60};
	int roll[7] = {1001, 1002, 1004, 1005, 1007, 1008, 1009};
	
	printf("1. Sort the data according to the marks obtained.\n");
	printf("2. Search and print the data based on a roll number.\n");
	printf("3. Search and print the data based on name.\n");
	printf("Enter choice: ");
	scanf("%d", &n);
	
	switch(n){
		case 1:
			sorted = sort(marks, name, roll);
			for(i = 0; i < 7; i++){
				printf("Name: %s\n", *(name+i));
				printf("Marks: %.1f\n", marks[i]);
				printf("Roll no: %d\n", roll[i]);
			}
			break;
		case 2:
			search_roll(name, marks, roll);
			break;
		case 3:
			search_name(name, marks, roll);
			break;
		default:
			printf("Invalid choice");
			break;
	}
	
	return 0;
}
