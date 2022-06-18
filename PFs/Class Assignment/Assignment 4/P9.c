#include <stdio.h>

void addBook();
void displayBook();
void allBooks();
void searchBook();
void countBook();
void accessionBook();

struct library{
	int book_num;
	char book_title[50];
	char book_author[15];
	int book_price;
	int issue_flag; // 0 = yes 1 = no
} lib[100];

int count = 0;

int main(){
	
	printf ("\t------------------------------- Welcome -------------------------------\n\n");
	printf ("\t---------------------------- To Fast Nuces ----------------------------\t\t\n\n");
	printf ("\t------------------------------- Library -------------------------------\n\n");
	int a;
	while(1){
		printf("\n1: Add book information \n");
		printf("\n2: Display book information \n");
		printf("\n3: List all books of given author \n");
		printf("\n4: List the title of specified book \n");
		printf("\n5: List the count of books in the library \n");
		printf("\n6: List the books in the order of accession book\n");
		printf("\n7: Exit \n");
		scanf("%d", &a);
		
		switch(a){
			case 1:
				addBook();
				break;
			case 2:
				displayBook();
				break;
			case 3:
				allBooks();
				break;
			case 4:
				searchBook();
				break;
			case 5:
				countBook();
				break;
			case 6:
				accessionBook();
				break;
			case 7:
				return 0;
			default:
				printf("No such option..Retry!!");
		}
	}
}

void addBook(){
	
	int quantity, i,limits = 5;
	
	system("cls");
	printf("\t \t \t ADD Book \n \n");
	
	while(1){
		printf("How many books you want to add.?: ");
		scanf("%d", &quantity);
		
		if(quantity < limits) break;
		else printf("Limit is only 4 at a time\n");
	}
	for(i=count; i<count+quantity; i++){
		
		printf("\nEnter Book-%d Details: \n\n", i+1);
		printf("Enter book number: ");
		scanf("%d", &lib[i].book_num);
		fflush(stdin);
		printf("Enter book name: ");
		fgets(lib[i].book_title, sizeof(lib[i].book_title), stdin);
		fflush(stdin);
		printf("Enter author name: ");
		fgets(lib[i].book_author, sizeof(lib[i].book_author), stdin);
		fflush(stdin);
		printf("Enter book cost: ");
		scanf("%d", &lib[i].book_price);
		lib[i].issue_flag = 1; // 1 means not issued yet.
		fflush(stdin);

		
		system("cls");
	}
	count+= quantity;
}
void displayBook(){
	
	int i; char ch[10];
	
	system("cls");
	
	printf("\t \t \t Display Book \n \n");
	
	
	if (count == 0){
		printf("Library is empty");
	}
	for(i=0; i<count; i++){
		printf("Book - %d\n", i+1);
		printf("Book Number : %d\n", lib[i].book_num);
		printf("Book Name : %s\n", lib[i].book_title);
		printf("Book Author Name : %s\n", lib[i].book_author);
		printf("Book Price: %d \n", lib[i].book_price);
		printf("is Book available: %s \n\n", (lib[i].issue_flag == 0) ? "No":"Yes");
	}
	getch();
	system("cls");
}
void allBooks(){
	
	char author[25]; int i;
	
	system("cls");
	
	printf("\t \t \t Search Book with Authors name \n \n");
	
	printf("Enter Author Name: ");
	fflush(stdin);
	fgets(author, sizeof(author), stdin);
	fflush(stdin);

	
	for(i=0; i<count; i++){
		if (strcmp(author,lib[i].book_author) == 0){
			printf("Book Number : %d\n", lib[i].book_num);
			printf("Book Name : %s\n", lib[i].book_title);
			printf("Book Author Name : %s\n", lib[i].book_author);
			printf("Book Price: %d \n", lib[i].book_price);
//			printf("is Book available: %s \n\n", (lib[i].issue_flag == 0) ? "No":"Yes");
		}
		
	}
	getch();
	system("cls");
}
void searchBook(){
	
	char title[50]; int i;
	system("cls");
	
	printf("\t \t \t Search Book with Book Title \n \n");
	
	printf("Enter Book Title: ");
	fflush(stdin);
	fgets(title, sizeof(title), stdin);

	
	for(i=0; i<count; i++){
		if (strcmp(title,lib[i].book_title) == 0){
			printf("Book Number : %d\n", lib[i].book_num);
			printf("Book Name : %s\n", lib[i].book_title);
			printf("Book Author Name : %s\n", lib[i].book_author);
			printf("Book Price: %d \n", lib[i].book_price);
//			printf("is Book available: %s \n\n", (lib[i].issue_flag == 0) ? "No":"Yes");
		}
	}
	getch();
	system("cls");

}
void countBook(){
	
	system("cls");
	
	printf("\t \t \t Total Count  \n \n");
	printf("Checking the total count....... \n");
	sleep(1);
	printf("Total count = %d", count);
	
	getch();
	system("cls");
}
void accessionBook(){
	
	int swap,i,j;
	
	system("cls");
	
	printf("\t \t \t List of book in the order of accession \n \n");
	for (i = 0 ; i < count - 1; i++){
    	for (j = 0 ; j < count - i - 1; j++){
      		if (lib[j].book_num > lib[j+1].book_num){
        		swap = lib[j].book_num;
        		lib[j].book_num = lib[j+1].book_num;
        		lib[j+1].book_num = swap;
      		}
    	}
  	}
  	printf("Number : Book  \n");
  	for(i=0; i<count; i++){
  		printf("%d \t : \t%s \n",lib[i].book_num, lib[i].book_title);
	  }
	getch();
	system("cls");
}

