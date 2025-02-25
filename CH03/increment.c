// C Programming Foundations Course LinkedIn
// prefix or postfix increment operators
// Lori Pfahler
// January 2025

#include <stdio.h>

int main(void)
{
  int a = 10;
  int b = a;
  // postfix - printed first then changes
  puts("postfix test:");
  printf("a =%i, b = %i\n", a++, b--);
  printf("a =%i, b = %i\n", a, b);

  // reset a and b
  a = 10;
  b = a;

  // prefix - change is made then printed
  puts("perfix test:");
  printf("a =%i, b = %i\n", ++a, --b);
  printf("a =%i, b = %i\n", a, b);
}