// C Programming Foundations Course LinkedIn
// Chapter 3 Challenge 2
// Lori Pfahler
// January 2025
#include <stdio.h>

int main(void)
{
  int artifacts, rooms, paintings, sculptures;
  rooms = 12;
  paintings = 16;
  sculptures = 4;

  artifacts = rooms * (paintings + sculptures);

  printf("This museum has %d artifacts\n", artifacts);

  return (0);
}
