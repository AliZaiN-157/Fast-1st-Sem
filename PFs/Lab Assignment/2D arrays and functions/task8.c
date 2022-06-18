#include <stdio.h>

int main()
{
    int a[10][10], a_transpose[10][10];
	int row, col, i, j, sym;
	
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &row, &col);

    printf("Enter elements of matrix: ");
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
        {
            printf("\nEnter element a[%d][%d]: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    
    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
        {
            a_transpose[j][i] = a[i][j];
        }
    
    printf("\nEntered Matrix: \n");
    for(i=0; i<row; i++)
    	
        for(j=0; j<col; j++)
        {
            printf("%d  ", a[i][j]);
            if (j == col-1)
                printf("\n");
        }


    printf("\nTranspose of Matrix:\n");
    for(i=0; i<col; i++)
        for(j=0; j<row; j++)
        {
            printf("%d  ",a_transpose[i][j]);
            if(j==row-1)
                printf("\n");
        }
	
	// checking symmetric
	if(col == row){
		for(i=0; i<col; i++){
			sym = 0;
			for(j=0; j<col; j++){
				if(a[i][j] == a_transpose[i][j]){
					sym++ ;
				}
			}
		}
		if(sym>1)
			printf("Matrix is symmetric");
		else 
			printf("Matrix is assymmetric");

	}
}


