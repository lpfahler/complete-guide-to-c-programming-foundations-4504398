// C Programming Foundations Course LinkedIn
// Hello with puts()
// Lori Pfahler
// January 2025

#include <stdio.h>

int main(void)
{
  int a, b;

  printf("Type a positive value: ");
  scanf("%d", &b);

  for (a = 0; a < b; a++)
  {
    printf("I must do this %d times\n", b);
    if (a == 9)
      break;
  }
  
  return 0;
}