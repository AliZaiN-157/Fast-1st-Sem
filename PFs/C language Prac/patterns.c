#include <stdio.h>
#include <string.h>
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int NamePattern();
int AlphabetPattern();
int NumberPattern();
int StarPattern();
int BoxPattern();
int NumberPattern2();

int main(){

	NamePattern();
//	AlphabetPattern();
//	NumberPattern();
//	StarPattern();
//	BoxPattern();
//	NumberPattern2();
}

int NumberPattern2(){

	int i,j;

	for(i=1; i<=5; i++){
		for(j=1; j<=i; j++){

			if ( (i+j) % 2 == 0){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
	}
}

int BoxPattern(){

	int i, j, N=4, n;

	n = 2 * N;

	for(i = 0; i <= n; i++){
		for(j=0; j<= n; j++){
			int check =  N - MIN(MIN(i,j), MIN(n-i, n-j));

			printf("%d ", check);
		}
		printf("\n");
	}
}
int StarPattern(){

	int i, j, space, n;
	
	scanf("%d", &n);
	for( i= 1 ; i <= n ; i++){

		for(space=0; space <= n-i; space++){
			printf(" "); // single gap for pyramid double gap for right side tilt
		}

		for(j = 1 ; j <= i ; j++){
			printf("* ");
		}
		printf("\n");
	}
}

int NumberPattern(){

	int i, j, space, row, k=1;

	scanf("%d", &row);
	for( i= 1 ; i <= row ; i++){

		for(space=0; space <= row-i; space++){
			printf("  "); // single gap for pyramid double gap for right side tilt
		}

		for(j = 1 ; j <= i ; j++){
			printf("%d ", k++);
		}
		printf("\n");
	}
}

int AlphabetPattern(){

	char alpha = 'a';
	int i, j, num;

	printf("Enter the Number: ");
	scanf("%d", &num);

	for(i = 0; i <= num-1; i++){
		for(j = 0 ; j <= i ; j++)
		{
			if (i == 0 || j == 0){
				printf("a");
			}
			else {
				alpha++ ;
				printf("%c", alpha);
			}

		}
		alpha='a';
		printf("\n");
	}

}

int NamePattern(){
	char str[20];
	int i, j, len, a;

	printf("Enter Your Name: ");
	scanf("%s", str);
	len = strlen(str);
	
	
	for(i = 0 ; i < 2*len ; i++){
		
		int col = i > len ? 2*len-i : i; 
//		if(i < len) {
//			a = i;
//		}
//		else{
//			a = abs(2*len - i);
//		}

		for(j=0; j <= col; j++){
			printf("%c", toupper(str[j]));

		}
		printf("\n");

	}
}
