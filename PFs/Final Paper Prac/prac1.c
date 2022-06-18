#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100], reverse[100];
	int i,j=0, len, wordstart, wordend;
	
	printf("Enter any string: "); // hye this is ali
	gets(str);
	
	len = strlen(str)-1; // len = 14
	
	wordstart = wordend = len; // wordstart = wordend = 14
	
	while(wordstart > 0){
		
		if(str[wordstart] == ' '){
			
			i = wordstart+1;
			
			while(i<= wordend ){
				reverse[j] = str[i];
				i++;
				j++;
			}
			
			reverse[j++] = ' ';	
			wordend = wordstart - 1;
		}
		
		wordstart--;
	}
	
	for(i=0; i<=wordend; i++)
    {
        reverse[j] = str[i];
        j++;
    }
    
    reverse[j] = '\0'; 
    printf("Original string \n%s\n\n", str);
    printf("Reverse ordered words \n%s", reverse);
}
