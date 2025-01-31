#include <stdio.h>

int main(void)
{
  // x21 = 33 in decimal - this is '!' for ASCII
  char greetings[4] = {'H', 'i', '\x21', '\0'};
  // putting the NUL '\0' on the end makes this char array a string
  puts(greetings);
  return 0;
}