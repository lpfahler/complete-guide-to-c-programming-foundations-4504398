// C Programming Foundations Course LinkedIn
// Chapter 3 Challenge 2
// Lori Pfahler
// January 2025
//

#include <stdio.h>

int main()
{
  int a, b;

  printf("Enter two values, separated by a space: ");
  scanf("%d", &a);
  scanf("%d", &b);

  // add
  printf("%i + %i = %i\n", a, b, a + b);
  // subtract
  printf("%i - %i = %i\n", a, b, a - b);
  // multiply
  printf("%i * %i = %i\n", a, b, a * b);
  // divide
  printf("%i / %i = %f\n", a, b, (float)a / (float)b);
  printf("%i / %i = %f\n", a, b, (float) a / b);
  // modulus
  printf("%i %% %i = %i\n", a, b, a % b);
  // bit shift right
  printf("%i >> %i = %i\n", a, b, a >> b);
  // bit shift left
  printf("%i << %i = %i\n", a, b, a << b);
  int c = 10;
  printf("%i\n", c >>= 1);

  return 0;
}
