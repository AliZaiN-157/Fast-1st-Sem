#include <stdio.h>
// int* -> int
// char* -> char
// why strong type.?
// why not some generic type.?
// Ans : We not only store memory we also do Dereference i.e Access/modify value
int main(){
    int a = 1025;
    int *p;
    p = &a;

//    printf("size of integer is %d bytes \n", sizeof(int));
//    printf("Address = %d, value = %d \n",p,*p);
//    printf("Address = %d, value = %d \n",p+1,*(p + 1));
//    
//    // 1025 = 00000000 00000000 00000100 000000001
//    
//    char *p0;
//    p0 = (char*)p; // typecasting
//    
//    // *p0 = 1 How -> 000000001
//    printf("size of integer is %d bytes \n", sizeof(char));
//    printf("Address = %d, value = %d \n",p0,*p0);
//    // *(p0+1) = 4 How -> 00000100
//    printf("Address = %d, value = %d \n",p0 + 1,*(p0 + 1));
    
    // void pointer - Generic pointer
    
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("Address = %d, value = %d \n",p,*p);
    
    void *p0;
    p0 = p;
//    printf("Address = %d, value = %d \n",p0,*p0); // we can only print the address no dereferencing 

	printf("Address = %d", p0); // even p0 + 1 will give compilation error

}
