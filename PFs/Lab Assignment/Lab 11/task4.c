#include<stdio.h>
#include<string.h>

int WordCount(char *Text){
	int i, wordcount= 0, len=0;
	
	len = strlen(Text);
	
	for (; *Text != '\0'; Text++)
        if (*Text == ' ' && *Text + 1 != ' ')
            wordcount++;
    return len - wordcount;
}

int main(){
	
	char str[50]; int len, a;
	
	printf("Enter Text to Check word count: ");
	gets(str);
	
	a = WordCount(str);
	
	printf("Word count = %d", a);
}
