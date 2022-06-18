#include<stdio.h>
#include<string.h>
int main(){
	int i,j, len, col;
	char str[50] = "UNIVERSITY";
	char * s = str;
	len = strlen(str);

	for(i=1 ; i < 2*len ; i+=2){
		col = i > len ? 2*len-i-2 : i;
		for(j = 0; j <= col; j++){
			printf("%c", s[j]);
		}
		printf("\n");
	}
}
