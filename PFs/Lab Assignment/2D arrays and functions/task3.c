#include<stdio.h>
#include<string.h>

int main(){
	
	int check;
	char str1[50]={},str2[50]={};
	
	printf("Enter the string 1: ");
	gets(str1);
	printf("Enter the string 2: ");
	gets(str2);
	
	check = strcmp(str1,str2);
	
	if(check == 0){
		printf("\n Both the strings are same...!");
	}
	else{
//		printf("%d", strcmp(str1,str2)); -1 and 1
		if(check > 0){
			printf("\n%s is greater than %s", str1, str2);
		}
		else {
			printf("\n%s is lesser than %s", str1, str2);
		}
	}
}
