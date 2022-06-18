#include <stdio.h>

// Write a C program to swap two numbers

// a). Without using any 3rd variable.

//int main(){
//	int x, y;
//	
//	printf("Enter value for x and y: ");
//	scanf("%d %d", &x, &y);
//	
//	printf("value before swapping x = %d and y = %d \n", x, y);
//	
//	x = x + y;
//	y = x - y;
//	x = x - y;
//	
//	printf("value after swapping x = %d and y = %d \n", x, y);
//}

// b). Using any 3rd variable

int main(){
	int x, y, temp;
	
	printf("Enter value for x and y: ");
	scanf("%d %d", &x, &y);
	
	printf("value before swapping x = %d and y = %d \n", x, y);
	
	temp = x;
	x = y;
	y = temp;
	
	printf("value after swapping x = %d and y = %d \n", x, y);
}
