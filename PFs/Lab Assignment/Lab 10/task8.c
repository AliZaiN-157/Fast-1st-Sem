#include<stdio.h>

struct invoice{
	char part[30];
	char part_desc[100];
	int quantity;
	float price;
	
} dm[4];

int main(){
	
	int i,j;
	float total_invoice;
	
	for(i=0; i<4; i++){
		
		printf("Entry-%d\n", i+1);
		fflush(stdin);
		printf("Enter Part name: ");
		fgets(dm[i].part,sizeof(dm[i].part),stdin);
		fflush(stdin);
		printf("Enter Part Description: ");
		fgets(dm[i].part_desc,sizeof(dm[i].part_desc),stdin);
		fflush(stdin);
		printf("Enter quantity: ");
		scanf("%d", &dm[i].quantity);
		printf("Enter Price: ");
		scanf("%f", &dm[i].price);
		
		if(dm[i].quantity < 0){
			dm[i].quantity = 0;
		}
		if(dm[i].price < 0.0){
			dm[i].price = 0.0;
		}
	}
	printf("Total Invoices : \n");
	for(i=0; i<4; i++){
		
		total_invoice = dm[i].quantity * dm[i].price;
		printf("Total invoice of part %s is %f\n", dm[i].part,total_invoice );
	}
}
