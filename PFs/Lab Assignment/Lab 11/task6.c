#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sentenceCase(char *Text);

int main(){
	char sen[100];
	
	printf("Enter sentence: ");
	gets(sen);
	sentenceCase(&sen);
	printf("%s", sen);
}

void sentenceCase(char *Text){
	int len, i, j;
	len = strlen(Text);
	
	*(Text) = toupper(*Text); // Hye. my name is alizain. 
	
	for(i=1; *(Text+i)!='\0'; i++){ 
		if(*(Text + i) == '.'){
			for(j = 1 ; j < len ; j++){
				int k = i + j;
				if(isalpha(*(Text + k))){
					*(Text + k) = toupper(*(Text + k));
					break;
				}
			}
		}
	}
}
