
#include <stdio.h>
#include <string.h>

void search(char *sentence, char *word)
{
	int len1, len2, flag=0, j, i, k;
    len1 = strlen(sentence);
    len2 = strlen(word);
   	
    for(i = 0; i <= len1; i++)
    {

        for (j = 0; j < len2; j++){
        	k = i + j;
        	if (*(sentence + k) != *(word + j))
                break;
		}
        if (j == len2) 
        {
           flag++;
        }
    }
    printf("Occurence = %d", flag);
}
   
void main()
{
   char sentence[100], word[20];
   int occur;
	
	printf("Enter the sentence: ");
	gets(sentence);
	
	printf("Enter the word: ");
	gets(word);
	
	search(sentence, word);
}
