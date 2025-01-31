// C Programming Foundations Course LinkedIn
// Show octal and hexadecimal formats vs decimat
// Lori Pfahler
// January 2025

#include <stdio.h>

int main(void)
{
  int x, o;

  // output hexadecimal (base 16) vs decimal
  // x = 1 to 16
  for (x = 0x1; x <= 0x10; x++)
  {
    printf("0x%X = %d\n", x, x);
  }
  // output octal (base 8) vs decimal
  // x = 1 to 8
  for (o = 01; o <= 010; o++)
  {
    printf("0%o = %d\n", o, o);
  }

  return 0;
}