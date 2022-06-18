#include <stdio.h>

int main()
{
    int i, j;

    /* Print ASCII values from 0 to 255 */
    printf("Alphabets \t alphabets \n");
    for(i=65,j=97; i<=90, j<=122; i++, j++) 
    {
        printf("%c \t \t %c \n", i, j);
    }

    return 0;
}
