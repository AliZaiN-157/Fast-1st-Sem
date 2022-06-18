#include<stdio.h>

#include <stdio.h>
int main()
{
    int rows, x, j, number= 1;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(x=1; x <= rows; x++)
    {
        for(j=1; j <= x; ++j)
        {
            printf("%d ", number);

        }

        printf("\n");
    }

    return 0;
}

