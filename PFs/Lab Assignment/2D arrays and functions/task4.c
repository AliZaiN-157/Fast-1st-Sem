#include<stdio.h>
#include<string.h>

void recruitment(int a);

int main(){
	
	int testmarks;
	
	printf("Enter your Test Mark: ");
	scanf("%d", &testmarks);
	
	recruitment(testmarks);
}

void recruitment(int a){
	
	int exp;
	if(a >= 50 && a < 60){
		printf("You\'re hired for trainee engineer.");
	}
	else{
		printf("Enter your experience: ");
		scanf("%d", &exp);
			if(a >= 60 && a < 70  && exp>=1){
				printf("You\'re hired for assistant developer position.");
				}	
			else if(a>=70 && exp>=2){
				printf("You\'re hired for associate developer position.");
			}
			else{
				printf("You\'re not eligible for any position");
			}
		}
	}

