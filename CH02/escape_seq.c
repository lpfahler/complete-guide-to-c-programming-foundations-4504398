// C Programming Foundations Course LinkedIn
// Escape sequences

// Lori Pfahler
// January 2025
#include <stdio.h>

int main(void)
{
  char a;

  printf("Type a single character: ");
  scanf("%c", &a);

  printf("You typed \"%c\", which is ASCII code: %d\n",
         a, a);
  return 0;
}