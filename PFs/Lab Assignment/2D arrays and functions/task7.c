#include<stdio.h>

int main()
{
    int a[3][3];
    int row, col, total=0;

    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &a[row][col]);
        }
    }

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            
            if(a[row][col] == 0)
            {
                total++;
            }
        }
    }

    if(total >= (row * col)/2)
    {
        printf("\nThe given matrix is a Sparse matrix.");
    }
    else
    {
        printf("\nThe given matrix is not Sparse matrix.");
    }

}
