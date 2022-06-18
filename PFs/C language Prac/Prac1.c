#include <stdio.h>

int main(){
	int a = 2, c= 4;
	
	int b = ++a + a++ - a-- + a++ - a--;
//	int b = ++a + a++ - a-- + a++ - a--;
    // 		 3  + 3 - 3 + 4 - 4 +  = 6
	//       3  +  3 - 4 + 3 - 4 = 
	
//	int d = c % c++ * a + a++ - c-- / a;
	int d = c-- % c * a + a++ - c / c++;
	//      5   % 4 * 6 + 6   - 3 / 3
    //			1*6 + 6 - 1 = 11
	
	printf("%d \n", b);
	printf("%d \n", d);
	
}
