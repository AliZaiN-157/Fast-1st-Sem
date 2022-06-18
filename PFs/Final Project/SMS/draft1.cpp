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
FILE * del(FILE * fp);
FILE *tp;
void single_read(FILE *fp);
void complain();

// Student Access
void sread_std(FILE * fp);
void complain();

// Windows + title
void title();
void admin_window(FILE * fp);
void student_window(FILE * fp);

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

struct Student
{
    char name[100];
    int batch;
    char dep[50];
    int roll;
    float gpa[12];
    float cgpa;
};


int main()
{
    int user;
    char pas[50];
    SetConsoleTitle("Student Management System | Fast NUCES Karachi");
    FILE * fp;
//    Student s;
//    int option;
//    char another;

    if((fp=fopen("db.txt","rb+"))==NULL)
    {
        if((fp=fopen("db.txt","wb+"))==NULL)
        {
            printf("Database Not working");
            return 0;
        }
    }
//    system("color 9f");

	title();
    printf("\n\n\t\t\t\t  The Team Members: \n");
    printf("\n\t\t\t\t  Arqam 21K-46xx \n\t\t\t");
    printf("\n\t\t\t\t  Ali Zain 21K-46xx \n\t\t\t");
    printf("\n\t\t\t\t  Hassan Amir 21K-46xx \n\t\t\t");

    printf("\n\n\n\t\t\t  Press Any Key To Enter");
    getch();
    system("cls");
    
    title();
    
    printf("\n\n\t\t\t\t  Who are You .? : ");
    printf("\n\n\t\t\t\t  1.Admin \n\t\t\t");
    printf("\n\n\t\t\t\t  2.Student \n\t\t\t");
	scanf("%d", &user);
	switch(user){
		case 1:
			admin_window(fp);
			break;
		
		case 2:
			 student_window(fp);
			break; 
			
		default:
			printf("Please select option given...");
			getch();
            system("pause");
	}
}

void title()
{
    system("cls");
    system("COLOR 30");
    printf("\n\n\t");
    printf("\t\t\t\t Student Management System ");
    printf("\n");
}

void admin_window(FILE * fp){
	
	int j;
    char pas[50];
    Student s;
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
	    pas[j]=getch();
	    char s=pas[j];
	    if(s==13)
		 break;
	    else printf("*");
	    j++;
	}
	pas[j]='\0';
    if(strcmp(pas,admin_password)==0)
	{
		system("cls");
	
	while(1)
    {
        title();
        printf("\n\t");

        printf("\n\n\t\t\t\t1. Create Student Data");
        printf("\n\n\t\t\t\t2. Read all Student Data");
        printf("\n\n\t\t\t\t3. Update Student Data");
        printf("\n\n\t\t\t\t4. Delete Student Data");
        printf("\n\n\t\t\t\t5. Exit\n\t");
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
                update_std(fp);
                break;
            case 4:
                fp=del(fp);
                break;
            case 5:
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
	int j;
    char pas[50];
//    FILE * fp;
    Student s;
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
	    pas[j]=getch();
	    char s=pas[j];
	    if(s==13)
		 break;
	    else printf("*");
	    j++;
	}
	pas[j]='\0';
    if(strcmp(pas,student_password)==0)
	{
		system("cls");
	
		while(1)
	    {
	        title();
	        printf("\n\t");
	
	        printf("\n\n\t\t\t\t1. Show Records");
	        printf("\n\n\t\t\t\t2. File a complain");
	        printf("\n\n\t\t\t\t3. Exit\n\t");
	        printf("\n\n\t\t\t\t Choose Option :");
	        scanf("%d",&option);
	
	        switch(option)
	        {
	            case 1:
	                single_read(fp);
	                break;
	            case 2:
	//                complain();
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
    title();
    
    char check='y';
    Student s;
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

        printf("\n\n\t\tEnter Depertment Name: ");
        fflush(stdin);
        fgets(s.dep,sizeof(s.dep),stdin);
        s.dep[strlen(s.dep)-1]='\0';

        printf("\n\n\t\tEnter Roll number: ");
        scanf("%d",&s.roll);

        printf("\n\n\tEnter GPA for 16 semesters\n");
        
        cgpa=0;
        for(i=0; i<12; i++)
        {
            scanf("\t\t\t %f",&s.gpa[i]);
            
            cgpa+=s.gpa[i];

        }

        cgpa/=12.0;
        s.cgpa=cgpa;

        fwrite(&s,sizeof(s),1,fp);

        printf("\n\n\t\tAdd another student?(Y/N)?");
        fflush(stdin);
        check = getchar();
        check = tolower(check);
    }
}


FILE * del(FILE * fp)
{
    title();

    Student s;
    int flag=0,stdRoll,size=sizeof(s);
    FILE *ft;

    if((ft=fopen("temp.txt","wb+"))==NULL)
    {
        printf("\n\n\t\t\t\t Database not found...! \n\t\t");
        system("pause");
        return fp;
    }

    printf("\n\n\tEnter Roll number of Student to Delete the Record");
    printf("\n\n\t\t\tRoll No. : ");
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

    remove("db.txt");
    rename("temp.txt","db.txt");

    if((fp=fopen("db.txt","rb+"))==NULL)
    {
        printf("ERROR");
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

    Student s;
    int i,flag=0,stdRoll,siz=sizeof(s);
    float cgpa;

    printf("\n\n\tEnter Roll Number of Student : : ");
    scanf("%d",&stdRoll);

    rewind(fp);

    while((fread(&s,siz,1,fp))==1)
    {
        if(s.roll==stdRoll)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        fseek(fp,-siz,SEEK_CUR);
        printf("\n\n\t\t\t\tRecord Found\n\t\t\t");
        printf("\n\n\t\t\tStudent Name: %s",s.name);
        printf("\n\n\t\t\tStudent Roll: %d\n\t\t\t",s.roll);
        printf("\n\n\t\t\tStudent Batch: %d\n\t\t\t",s.batch);

        printf("\n\n\t\t\tEnter New Data for the student");

        printf("\n\n\t\t\tEnter Full Name of Student: ");
        fflush(stdin);
        fgets(s.name,100,stdin);
        s.name[strlen(s.name)-1]='\0';
        
        printf("\n\n\t\t\tEnter Batch: ");
        scanf("%d",&s.batch);

        printf("\n\n\t\t\tEnter Department: ");
        fflush(stdin);
        fgets(s.dep,50,stdin);
        s.dep[strlen(s.dep)-1]='\0';

        printf("\n\n\t\t\tEnter Roll number: ");
        scanf("%d",&s.roll);


        printf("\n\n\t\tEnter GPA for 12 semesters\n");
        for(i=0,cgpa=0; i<12; i++)
        {
            scanf("%f",&s.gpa[i]);
            cgpa+=s.gpa[i];

        }
        cgpa=cgpa/8.0;


        fwrite(&s,sizeof(s),1,fp);
    }

    else printf("\n\n\t Record Not Found.....!");

    printf("\n\n\t");
    system("pause");

}

void read_std(FILE * fp)
{
    title();
    Student s;
    int i,size=sizeof(s);

    rewind(fp);

    while((fread(&s,size,1,fp))==1)
    {
        printf("\n\t\tName : %s",s.name);
        printf("\n\t\tBatch : %d",s.batch);
        printf("\n\n\tDepartment : %s",s.dep);
        printf("\n\n\tRoll : %d",s.roll);
        printf("\n\n\tGPA: ");

        for(i=0; i<16; i++)
            printf("| %.2f |",s.gpa[i]);
        printf("\n\n\t\tCGPA : %.2f\n\t",s.cgpa);
    }
    printf("\n\n\n\t");
    printf("\n\n\t");
    system("pause");
}

void single_read(FILE *fp)
{
    title();

    int stdRoll,flag,size,i;
    Student s;
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
            printf("\n\t\tStudent Name : %s",s.name);
            printf("\n\n\t\tBatch : %d",s.batch);
            printf("\n\n\t\tDepartment : %s",s.dep);
            printf("\n\n\t\tRoll : %d",s.roll);
            printf("\n\n\t GPA: ");

            for(i=0; i<12; i++) 
                printf("| %.2f |",s.gpa[i]);
            printf("\n\n\t\tCGPA : %.2f\n\t",s.cgpa);

        }
        else printf("\n\n\t\t No Such Record !!!!");

		fflush(stdin);
        printf("\n\n\t\tShow another student information? (Y/N)?");
        check=getchar();
        check = tolower(check);
    }
}
