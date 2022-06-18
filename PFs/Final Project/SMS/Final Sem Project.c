#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>

// Admin Command

void add_std(FILE * fp);
void update_std(FILE * fp);
void read_std(FILE * fp);
//FILE * del(FILE * fp);
void del_std(FILE * fp);
FILE *tp;
void single_read(FILE *fp);
//void complain();

// Student Access
void sread_std(FILE * fp);
//void complain();

// Windows + title
void title();
void admin_window(FILE * fp);
void student_window(FILE * fp);
void mainscreen();

// coordinates 
void gotoxy(int x,int y)
{
	COORD CRD;
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}

const char admin_password[25] = "admin";
const char student_password[25] = "student";
char campus;

struct Student
{
    char name[50];
    int batch;
    char dep[50];
    char campus[50];
    int roll;
    float gpa[8];
    float cgpa;
}s;

int main()
{
    int user;
    SetConsoleTitle("Student Management System | Fast NUCES Karachi");
    FILE * fp;
//    Student s;
//    int option;
//    char another;

    if((fp=fopen("data.txt","rb+"))==NULL)
    {
        if((fp=fopen("data.txt","wb+"))==NULL)
        {
            printf("Database Not working");
            return 0;
        }
    }
//    system("color 9f");
	
	mainscreen();
	gotoxy(45,20);
    printf("Press Any Key To Enter");
    getch();
    system("cls");
    
    while(1){
    	title();
    
	    gotoxy(40,10);
	    printf("Who are You .?");
	    gotoxy(42,12);
	    printf("1.Admin ");
	    gotoxy(42,14);
	    printf("2.Student");
	    gotoxy(42,16);
		scanf("%d", &user);
		switch(user){
			case 1:
				admin_window(fp);
				break;
			
			case 2:
				student_window(fp);
				break; 
				
			default:
				gotoxy(42,18);
				printf("Please select the given options ...\n");
				gotoxy(42,19);
				system("pause");
		}
	}
}

void mainscreen(){
	int x; double y;
	char head1[40]= "W E L C O M E";
	char head2[40]= "T O ";
	char head3[60]= "S T U D E N T  M A N A G E M E N T  S Y S T E M";


    system("cls");
    system("COLOR 70"); //COLOR 30
    gotoxy(12,1);
    printf("=============================================================================================");
	
	gotoxy(45,6);
    for(x=0; head1[x]!='\0'; x++){
   	
    	printf("%c",head1[x]);

      	for(y=0; y<=9999999; y++)
      	{
      	}
   }
   gotoxy(49,9);
    for(x=0; head2[x]!='\0'; x++){
   	
    	printf("%c",head2[x]);

      	for(y=0; y<=9999999; y++)
      	{
      	}
   }
   gotoxy(27,12);
    for(x=0; head3[x]!='\0'; x++){
   	
    	printf("%c",head3[x]);

      	for(y=0; y<=9999999; y++)
      	{
      	}
   }
   
    gotoxy(12,18);
	printf("=============================================================================================\n");
}

void title()
{
	int x; double y;
	char subtitle[50]= "\n\t\t\t\t\t\t Student Management System ";
    system("cls");
    system("COLOR 70"); //COLOR 30
    gotoxy(12,1);
    printf("=============================================================================================");
	
	gotoxy(8,3);
    for(x=0; subtitle[x]!='\0'; x++){
   	
    	printf("%c",subtitle[x]);

      	for(y=0; y<=9999999; y++)
      	{
      	}
   }
    gotoxy(12,6);
	printf("=============================================================================================");
}

void admin_window(FILE * fp){
	
	int j;
    char passcode[50];
//    Student s;
    int option;
    
    system("cls");
    title();
	gotoxy(20,8);
	printf("\tLogin Account");
	gotoxy(20,10);
	gotoxy(20,11);
	printf("\tEnter password :");
	gotoxy(20,12);
	gotoxy(42,11);
	while( j<10)
	{
	    passcode[j]=getch();
	    char s=passcode[j];
	    if(s==13)
		 break;
	    else printf("*");
	    j++;
	}
	passcode[j]='\0';
    if(strcmp(passcode,admin_password)==0)
	{
		system("cls");
	
	while(1)
    {
        title();
        printf("\n\n\t");
        
        printf("\t\t\t\t\t\tAdmin Dashboard\n");
        printf("\t\t\t\t\t_____________________________________________\n\t");

        printf("\n\n\t\t\t\t1. Create Student Data");
        printf("\n\n\t\t\t\t2. Read all Student Data");
        printf("\n\n\t\t\t\t3. Read single Student Data");
        printf("\n\n\t\t\t\t4. Update Student Data");
        printf("\n\n\t\t\t\t5. Delete Student Data");
        printf("\n\n\t\t\t\t6. Back");
        printf("\n\n\t\t\t\t7. Exit\n\t");

        printf("\n\n\t\t\t\t Choose Option :");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
                add_std(fp);
                break;
            case 2:
            	read_std(fp);
                break;
            case 3:
                single_read(fp);
                break;
            case 4:
                update_std(fp);
                break;
            case 5:
//                fp=del(fp);
				del_std(fp);
            	break;
            case 6:
            	main();
            	break;
            case 7:
            	exit(0);
            	break;
            default:
                printf("\n\t\tNo Such Option");
                printf("\n\t\tPress Any Key\n\n\n");
                getch();
                system("pause");
        }
    }
    }
    else
    {
        printf("Incorrect Password");
        getch();
    }
}

void student_window(FILE * fp){
	int j,option;
    char passcode[50];
//    FILE * fp;
//    Student s;
    
    system("cls");
    title();
	gotoxy(20,8);
	printf("\tLogin Account");
	gotoxy(20,10);
	gotoxy(20,11);
	printf("\tEnter password :");
	gotoxy(20,12);
	gotoxy(42,11);
	while( j<10)
	{
	    passcode[j]=getch();
	    char s=passcode[j];
	    if(s==13)
		 break;
	    else printf("*");
	    j++;
	}
	passcode[j]='\0';
    if(strcmp(passcode,student_password)==0)
	{
		system("cls");
	
		while(1)
	    {
	        title();
	        printf("\n\n\t");
        
        	printf("\t\t\t\t\t\tStudent Dashboard\n");
        	printf("\t\t\t\t\t_____________________________________________\n\t");
	
	        printf("\n\n\t\t\t\t1. Show Records");
//	        printf("\n\n\t\t\t\t2. File a complain");
	        printf("\n\n\t\t\t\t2. Back");
	        printf("\n\n\t\t\t\t3. Exit\n\t");
	        printf("\n\n\t\t\t\t Choose Option :");
	        scanf("%d",&option);
	
	        switch(option)
	        {
	            case 1:
	                single_read(fp);
	                break;
//	            case 2:
	//                complain();
//	                break;
	            case 2:
	            	main();
	            	break;
	            case 3:
	            	exit(0);
	            	break;
	            default:
	                printf("\n\t\tNo Such Option");
	                printf("\n\t\tPress Any Key\n\n\n");
	                getch();
	                system("pause");
	        }
	    }
    }
    else
    {
        printf("Incorrect Password");
        getch();
    }
}
// Adding student data

void add_std(FILE * fp)
{
	system("cls");
    title();
    
    char check='y';
//    Student s;
    int i;
    float cgpa;
    fseek(fp,0,SEEK_END);
    while(check=='y')
    {

        printf("\n\n\t\tEnter Full Name of Student: ");
        fflush(stdin);
        fgets(s.name,sizeof(s.name),stdin);
        s.name[strlen(s.name)-1]='\0';
		
		printf("\n\n\t\tEnter Batch Number: ");
		scanf("%d",&s.batch);
		
		printf("\n\n\t\tEnter Campus Name: ");
		fflush(stdin);
        fgets(s.campus,sizeof(s.campus),stdin);
        s.campus[strlen(s.campus)-1]='\0';

        printf("\n\n\t\tEnter Department Name: ");
        fflush(stdin);
        fgets(s.dep,sizeof(s.dep),stdin);
        s.dep[strlen(s.dep)-1]='\0';

        printf("\n\n\t\tEnter Roll number: ");
        scanf("%d",&s.roll);

        printf("\n\n\tEnter GPA for 8 semesters\n");
        
        cgpa=0;
        for(i=0; i<8; i++)
        {
            scanf("\t\t\t %f",&s.gpa[i]);
            
            cgpa+=s.gpa[i];

        }

        cgpa/=8.0;
        s.cgpa=cgpa;

        fwrite(&s,sizeof(s),1,fp);

        printf("\n\n\t\tAdd another student?(Y/N)?");
        fflush(stdin);
        check = getchar();
        check = tolower(check);
    }
}


//FILE * del(FILE * fp)
void del_std(FILE * fp)
{
    title();

//    Student s;
    int flag=0,stdRoll,size=sizeof(s);
    FILE *ft;

    if((ft=fopen("temp.txt","wb+"))==NULL)
    {
        printf("\n\n\t\t\t\t Database not found...! \n\t\t");
        system("pause");
        return fp;
    }

    printf("\n\n\tEnter Roll number of Student :");
    scanf("%d",&stdRoll);

    rewind(fp);

    while((fread(&s,size,1,fp))==1)
    {
        if(s.roll==stdRoll)
        {
            flag=1;
            printf("\n\tRecord Deleted for");
            printf("\n\n\t\t%s\n\n\t\t%d\n\t\t%s\n\n\t\t%d\n\t",s.name,s.batch,s.dep,s.roll);
            continue;
        }

        fwrite(&s,size,1,ft);
    }


    fclose(fp);
    fclose(ft);

    remove("data.txt");
    rename("temp.txt","data.txt");

    if((fp=fopen("data.txt","rb+"))==NULL)
    {
        printf("Error..!");
        return  NULL;
    }

    if(flag==0) printf("\n\n\t\tNO STUDENT FOUND WITH THE INFORMATION\n\t");

    printf("\n\t");
    system("pause");
    return fp;
}

void update_std(FILE * fp)
{
    title();

//    Student s;
    int i,size=sizeof(s),flag=0,stdRoll;
    float cgpa;

    printf("\n\n\tEnter Roll Number of Student: ");
    scanf("%d",&stdRoll);

    rewind(fp);

    while((fread(&s,size,1,fp))==1)
    {
        if(s.roll==stdRoll)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        fseek(fp,-size,SEEK_CUR);
        printf("\n\n\t\t\t\tRecord Found");
        printf("\n\n\t\t\tStudent Name: %s",s.name);
        s.batch = (s.batch % 100);
        campus = toupper(s.campus[0]);
        printf("\n\n\t\t\tStudent Nu ID. : %d%c-%d",s.batch,campus,s.roll);
        printf("\n\n\t\t\tStudent Department: %s",s.dep);
        
        printf("\n\n\t\t\t\tEnter New Data for the student");
        printf("\n\t\t\tEnter Full Name of Student: ");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';
        
        printf("\n\t\t\tEnter Campus Name: ");
		fflush(stdin);
        fgets(s.campus,sizeof(s.campus),stdin);
        s.campus[strlen(s.campus)-1]='\0';
        
        printf("\n\t\t\tEnter Batch: ");
        scanf("%d",&s.batch);

        printf("\n\t\t\tEnter Department: ");
        fflush(stdin);
        fgets(s.dep,50,stdin);
        s.dep[strlen(s.dep)-1]='\0';

        printf("\n\t\t\tEnter Roll number: ");
        scanf("%d",&s.roll);


        printf("\n\t\t\tEnter GPA for 8 semesters\n");
        for(i=0,cgpa=0; i<8; i++)
        {
            scanf("%f",&s.gpa[i]);
            cgpa+=s.gpa[i];

        }
        s.cgpa=cgpa/8.0;


        fwrite(&s,sizeof(s),1,fp);
    }

    else printf("\n\n\t Record Not Found.....!");

    printf("\n\n\t");
    system("pause");

}

void read_std(FILE * fp)
{
	system("cls");
    title();
//    Student s;
    int i,size=sizeof(s);

    rewind(fp);

    while((fread(&s,size,1,fp))==1)
    {
        printf("\n\t\tStudent Name : %s",s.name);
        s.batch = (s.batch % 100);
        campus = toupper(s.campus[0]);
        printf("\n\t\tStudent Nu ID. : %d%c-%d",s.batch,campus,s.roll);
        printf("\n\t\tStudent Department : %s",s.dep);
        printf("\n\t\tStudent GPA: ");

        for(i=0; i<8; i++)
            printf("| %.2f |",s.gpa[i]);
        printf("\n\t\tStudent CGPA : %.2f\n",s.cgpa);
        printf("\t\t======================================================================================");

    }
    printf("\n\n\n\t");
    system("pause");
}

void single_read(FILE *fp)
{
    title();

    int stdRoll,flag,size,i;
//    Student s;
    char check='y';

    size=sizeof(s);

    while(check=='y')
    {
        printf("\n\n\tEnter Roll Number: ");
        scanf("%d",&stdRoll);

        rewind(fp);

        while((fread(&s,size,1,fp))==1)
        {
            if(s.roll==stdRoll)
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
        {
            printf("\n\n\tStudent Name : %s",s.name);
            s.batch = (s.batch % 100);
        	campus = toupper(s.campus[0]);
        	printf("\n\n\tStudent Nu ID. : %d%c-%d",s.batch,campus,s.roll);
            printf("\n\n\tStudent Department : %s",s.dep);
            printf("\n\n\t GPA: \n\t\t");

            for(i=0; i<8; i++) 
                printf("Sem - %d = %.2f\n\t\t",i+1,s.gpa[i]);
            printf("\n\tCGPA : %.2f\n\t",s.cgpa);

        }
        else printf("\n\n\t\t No Such Record !!!!");

		fflush(stdin);
        printf("\n\n\t\tShow another student information? (Y/N)?");
        check=getchar();
        check = tolower(check);
    }
}
