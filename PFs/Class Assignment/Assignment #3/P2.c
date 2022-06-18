#include <stdio.h>
#include <math.h>

int main(){
	unsigned int i, n, t1=0, t2=1, nextTerm, birthyear, studentid, prime_num, lsd, msd;
	
	printf("Enter the MSD of your birth year: ");
	scanf("%d", &birthyear); // msd of birth year 2002 is 2
	
	msd = birthyear/1000;
	
	printf("Enter the LSD of your Student ID: ");
	scanf("%d", &studentid); // lsd of nu id xxx3 is 3 
	
	lsd = studentid % 10;
	
	prime_num = pow(2,5); // third smallest prime number is 5 
	
	n = prime_num + msd + lsd; 
	
	printf("\nSequence : ");
	
	for(i = 1; i <=n; ++i){
		printf("%u ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
}
