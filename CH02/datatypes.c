// C Programming Foundations Course LinkedIn
// Datatypes in C
// Lori Pfahler
// January 2025
#include <stdio.h>

int main(void)
{
  char my_c;
  int my_i;
  float my_f;
  double my_d;

  // input
  printf("Type a character: ");
  scanf("%c", &my_c);
  printf("Type an integer: ");
  scanf("%i", &my_i);
  printf("Type an small value: ");
  scanf("%f", &my_f);
  printf("Type an large value: ");
  scanf("%lg", &my_d);

  // output
  printf("\nCharacter: %c\n", my_c);
  printf("Integer: %i\n", my_i);
  printf("Float Single-precision: %f\n", my_f);
  printf("Float Double-precision: %lg\n", my_d);

  return 0;
}