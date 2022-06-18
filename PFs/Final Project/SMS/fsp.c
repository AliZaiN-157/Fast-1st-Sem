#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    
    char n[30], p[20], u[30], s[20] ,i[16];
    char v[]={{"42501-86534491-4"},{"33805-47456736-2"},{"14923-93458675-9"},{"22406-75639757-3"}};
    printf("-----------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\t\t\tWELCOME  TO FAST TRAVEL AND TOURS !");
    printf("\n\n-----------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\t\tFOR FURTHER PROCEEDINGS PLEASE ENTER YOUR LOGIN CRETENCIALS BELOW! ");
    printf("\n\n\t\t\t\t\tUSERNAME :");
    fflush(stdin);
    gets(n);
    printf("\n\t\t\t\t\tPASSWORD :");
    gets(p);
    //system("CLS");
    printf("\n\n\t\t\t\tPLEASE ENTER YOUR LOGIN CRETENCIALS BELOW!");
    printf("\n\n\t\t\t\t\tUSERNAME :");
    fflush(stdin);
    gets(u);
    printf("\n\t\t\t\t\tPASSWORD :");
    fflush(stdin);
    gets(i);
    if(((strcmp(n,u))==0) && (strcmp(p,i)==0)){
        
        printf("\n\n\t\t\t\t\tSUCCESSFULLY LOGIN!");
        printf("FOR VERIFICATION!\n");
        printf("ENTER YOUR CNIC \n like.(123xx-xxxxxxxx-x) :");
        fflush(stdin);
        gets(n);
        if((strcmp(i,v))){
		printf("SUCCESSFULLY VERIFIED!\nTHE RECORD MATCHED!");
	}
	else{
		printf("INVALID CNIC!");
	}
        
    }
    
    else if(((strcmp(n,u))==1) || (strcmp(p,i)==1)){
        
        printf("\n\n\n\t\t\t\t\tINVALID USERNAME OR PASSWORD");
    }
}
