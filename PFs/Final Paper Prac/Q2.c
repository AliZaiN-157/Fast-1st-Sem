#include<stdio.h>

int main(){
	
	char cnic[50];
	int i=0,j, middle_num, digit, sum=0, num=0;
	
	printf("Enter Cnic: ");
	gets(cnic);
	
	printf("num be de bhrwe: ");
	scanf("%d", &num);
	printf("Enter middle num: ");
	scanf("%d", &middle_num);
	
	digit = (int) log(middle_num) + 1;
	
	while(i!=digit){
		sum += middle_num%10;
		middle_num /=10;
		i++;
	}
	printf("len = %d", sum/3);
	
	
	
}
