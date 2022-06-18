#include <stdio.h>

int main(){
	
	int i,j, space;
	
	for(i=1; i<=7; i++){
		
		
		for(j=1; j<=7; j++){
			
			if(j>=i && j<=8-i)
				printf("*");
			else
				printf(" ");
			
		}
		printf("\n");
	}
}

//int main(){
//	
//	int i,j,space;
//	
//	for(i=0; i<10; i++){
//		
//		if(i<5){
//			
//			for(j = 0; j<=i; j++){
//				printf("*");
//			}
//		}
//		else{
//			for(space = 0; space<i-5; space++){
//				printf(" ");
//			}
//			for(j = 1; j<=10-i; j++){
//				printf("*");
//			}
//		}
//		printf("\n");
//	}
//	
//}
