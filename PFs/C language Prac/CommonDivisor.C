/* C Program to find Greatest Common Divisor of two integers  */

#include <stdio.h>
#include <conio.h>

int main() {
  int x, y,a,b,t,G;

  printf("Enter two integers\n");
  scanf("%d %d", &x, &y);

  a = x;
  b = y;

  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
  G = a;
  printf("GCD for %d and %d is ", x, y);
  printf("%d",a);
  getch();
}
