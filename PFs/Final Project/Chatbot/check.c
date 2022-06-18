#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<dos.h>

void login_win();
void check_pass();
void home_win();
void show_record();
void add_record();
void del_record();
void update_record();

void main(){
	system("color b");
	
    printf("\n \n \t \t \t \t Student Management System \t \t \t \t \n \n");

//    login_win();
//    system("cls");
    home_win();


    getch();
}

void login_win(){

    printf("\t \t \t \t \t Login Window \t \t \t \t \n");
    sleep(1);
    check_pass();
}

void check_pass()
{
	char password[10], username[10];
    char real_password[10]= "Admin", real_username[10] = "Admin";
	

    	printf("\nEnter your name: \t \t \t ");    
    	gets(username);
    	printf("\nEnter Passcode: \t \t \t ");
    	gets(password);
    
    	sleep(1);
    	if(strcmp(username,real_username)==0 && strcmp(password,real_password)==0){
//    		Access = 1;
    		printf("\nAccess Granted...! \n");
    		sleep(2);
		}
		else {
			printf("\nUsername/Passcode Invalid.... \n");
			sleep(2);
			exit(1);
		}
		
	
}

void home_win(){
	int menu=0;
	
	printf("\n\n \t\t\t\t Main Menu \t\t\t\t \n\n");
	
	printf("\n \t\t\t 1. \t Show Student Record \t\t\t\t \n");
	printf("\n \t\t\t 2. \t Add Student Record \t\t\t\t \n");
	printf("\n \t\t\t 3. \t Update Student Record \t\t\t\t \n");
	printf("\n \t\t\t 4. \t Delete Student Record \t\t\t\t \n");
	do {
		scanf("%d", &menu);
		switch(menu){
		case 1 : {
//			show_record();
			printf("one");
			break;
		}
		case 2 : {
//			add_record();
			break;
		}
		case 3: {
//			update_record();
			break;
		}
		case 4: {
//			del_record();
			break;
		}
		default:
			printf("Provide Valid Detail....");
			system("cls");
	}
	}while(menu != 1 || menu != 2 || menu != 3 || menu != 4);
}



