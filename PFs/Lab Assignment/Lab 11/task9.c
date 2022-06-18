#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100]; 
    char * s = str;
    int vowel, con;

    printf("Enter string: ");
    gets(str);

    vowel = 0;
    con= 0;

    while(*s)
    {
        if(isalpha(*s))
        {
            switch(*s)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowel++;
                    break;
                default:
                    con++;
            }
        }
        s++;
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", con);
}
