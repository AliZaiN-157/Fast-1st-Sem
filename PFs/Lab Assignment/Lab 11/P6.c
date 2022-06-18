#include <stdio.h>

void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);
	
    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}


//int main(){
//	
//	int a=5;
//	
////	a = ++a + a++ + --a + a++ + a--;
////    =   6 +   6 + 6  + 6 + 7
//	
//	printf("%d\n", ++a); // 6
//	printf("%d\n", a++); // 6
//	printf("%d\n", --a); // 6
//	printf("%d\n", ++a); // 7
//	printf("%d\n", a--); // 7
//	a=5;
//	printf("%d", ++a + a++ - --a  ++a + a--);
//}
