#include <stdio.h>
#include <string.h>

void decode(char a[],int start, int end);
int main(){
	
	char pass[50]; int len;
	puts("Enter the password: ");
	gets(pass);
	len = strlen(pass)-1;
	decode(pass,0,len);
	printf("%s\n", pass);
}

void decode(char a[], int start ,int end){
	
	char i;
	
	if(start >= end)
		return; 
	i = a[end]; // happy coding
	a[end] = a[start];
	a[start] = i; // gnppy codiah
	
	decode(a, ++start, --end);
}


