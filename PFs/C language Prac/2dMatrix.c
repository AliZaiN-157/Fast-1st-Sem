#include<stdio.h>

int determinant(int a[2][2]){
	int dtm;
	
	dtm = a[0][0]*a[1][1] - a[1][0]*a[0][1];
	
	return dtm;
}

int main(){
	
	int dtm;
	
    int Matrix[2][2]={};
    
    printf("Enter First element of Matrix: ");
    scanf("%d", &Matrix[0][0]);
    
    printf("Enter Second element of Matrix: ");
    scanf("%d", &Matrix[0][1]);

    printf("Enter Third element of Matrix: ");
    scanf("%d", &Matrix[1][0]);

    printf("Enter Fourth element of Matrix: ");
    scanf("%d", &Matrix[1][1]);


    dtm = determinant(Matrix);

    printf("\nDeterminant of 2X2 matrix: %ld",dtm);
 
   return 0;
}
