#include<stdio.h>
#include<string.h>

void freq(char a[]);
int main(){
	
	char name[20]={}, course1[40]={}, course2[40]={}, course3[40]={};
	
	printf("Enter your name: ");
	gets(name);
	freq(name);
	printf("Enter your 1st course name: ");
	gets(course1);
	freq(course1);
	printf("Enter your 2nd course name: ");
	gets(course2);
	freq(course2);
	printf("Enter your 3rd course name: ");
	gets(course3);
	freq(course3);
	
}

void freq(char a[]){
	
	int i, j, len, flag=0, check_freq[20]={}, testcheck=-1;
	len = strlen(a);
	for(i=0; i<len; i++){
		flag = 1;
		for(j=i+1; j<len;j++){
			if ( a[i] == a[j]){
				flag++;
				check_freq[j] = testcheck;
			}
		}
		if(check_freq[i] != testcheck)    
            check_freq[i] = flag;
	}
	for(i = 0; i < len; i++){    
        if(check_freq[i] != testcheck){    
            printf("frequency of %c in %s is %d times\n", a[i],a, flag);       
        }    
    } 
}
