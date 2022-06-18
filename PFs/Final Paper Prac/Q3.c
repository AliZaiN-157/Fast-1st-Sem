#include<stdio.h>


double func(double train_a, double train_b, double hb, double distance){
	
	if(train_b==0){
		return train_a;
	}
	else
		return (0 + func(train_a,train_b-1,hb,distance));
}

int main(){
	
	double train_a = 50, train_b=70, hb= 80, distance=100;
	printf("%.2lf",func(train_a,train_b,hb, distance));
}
