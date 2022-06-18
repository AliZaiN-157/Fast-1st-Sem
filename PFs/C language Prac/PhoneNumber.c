#include <stdio.h>

int main(){
	
	int n ,i, eight=0; char num[12];
	
	scanf("%s", &num);
	
	for(i=0; i<n; i++){
		if (num[i] == "8"){
			eight++;
		}
	}
	if(eight >= n/11){
			printf("%d", n/11);
		}
		else if (eight < n/11 && eight > 11){
			printf("%d", eight);
		}
		else {
			printf("");
		}
}
