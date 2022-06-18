#include<stdio.h>
void main()
{
int a[] = {1,2,9,8,6,3,5,7,8,9};
int *p = a + 1;
printf("%d", *p);
int *q = a + 6;
printf("\n%d", *q);
printf("\n%d", q-p);
}
