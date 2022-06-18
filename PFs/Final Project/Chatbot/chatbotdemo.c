#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

char user_input[];
char search[];
char item[];
int main()
{

	system("cls");
	
	printf("Welcome in ai chat bot \n");
	
	while(1)
	{
		printf("(User): ");
		gets(user_input);
		
		if (strcmp(user_input,"exit") == 0)
		{
			system("cls");
			printf("(Alexa): ok bye \n");
			break;
		}
		else if (strcmp(user_input,"hi") == 0)
		{
			printf("(Alexa): Greetings Sir \n");
		}
		else if (strcmp(user_input,"open chrome") == 0)
		{
			printf("(Alexa): Opening Chrome..... \n");
			system("start chrome");
		}
		else if (strcmp(user_input,"open notepad") == 0)
		{
			printf("(Alexa): Opening Note Pad..... \n");
			system("start notepad");
		}
		else if (strcmp(user_input,"open cmd") == 0)
		{
			printf("(Alexa): Opening CMD Terminal..... \n");
			system("start cmd");
		}
		else if (strcmp(user_input,"open youtube") == 0)
		{
			printf("(Alexa): Want to search anything? \n");
			gets(search);
			if (strcmp(search,"yes") == 0){
				printf("what you want to search? \n");
				gets(item);
				system("start https://youtube.com/",item);
			}
			
			printf("(Alexa): Opening Youtube..... \n");
			system("start https://youtube.com/");
		}
		else if (strcmp(user_input,"time") == 0)
		{
			time_t s, val=1;
			struct tm* current_time;
			// time in second
			s = time(NULL);
			
			current_time = localtime(&s);
			//print time in minute
			//print hour and second
			
			printf("(Alexa) Time: %02d:%02d:%02d \n", current_time->tm_hour, current_time->tm_min, current_time->tm_sec);
		}
	}
	return 0;
	
}
