#include<stdio.h>
#include<string.h>

int main(){
	
	int i, len;
	char first_name[20], last_name[20], full_name[20]={};
	
	printf("Enter the first name: ");
	scanf("%s", first_name);
	
	printf("Enter the last name: ");
	scanf("%s", last_name);

	strcat(first_name,last_name);
	len = strlen(first_name);
	
	for(i=len; i>0; i--){
		full_name[len-i] = first_name[i-1];
	}
	printf("Backward : %s", full_name);
	
}

