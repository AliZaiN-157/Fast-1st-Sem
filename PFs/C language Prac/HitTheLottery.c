#include <stdio.h>

int main(){
	
	int n, ans=0, i, a[]={100,50,20,10,5};
	
	scanf("%d", &n);
	
	for(i=0; i<5 ; i++){
		
		ans += n / a[i];
		n %= a[i];
	}
	printf("Ans = %d", ans);
}
