// C Programming Foundations Course LinkedIn
// Datatypes in C
// Lori Pfahler
// January 2025
#include <stdio.h>
 
int main(void)
{
  char buffer[32];

  printf("Type your name: ");
  fgets(buffer, 32, stdin);
  printf("Hello, %s", buffer);
  return 0;
}