#include <stdio.h>

int main(){
	
	int n1, n2, n3, largest, sec_largest, total=0;
	
	scanf("%d %d %d", &n1, &n2, &n3);
	
		largest = n1;
		if(n1>n2 && n1>n3){
			largest = n1;
			sec_largest = n2 + n3;
			
		}
		else if (n2>n1 && n2>n3){
			largest = n2;
			sec_largest = n1 + n3;
		}
		else if (n3 > n1 && n3 > n2){
			largest = n3;
			sec_largest = n1+n2;
		}
	
	printf("Largest = %d, Second Largest with smallest added = %d \n \n", largest, sec_largest);
	
	while(sec_largest != 0){
		
		if (sec_largest % 2 == 0){
			total += largest;
		}
		
		printf("%d \t | \t %d \n", largest, sec_largest);
		
		largest *= 2;
		sec_largest /=2;
	}
	
	printf("total = %d", total);
}
