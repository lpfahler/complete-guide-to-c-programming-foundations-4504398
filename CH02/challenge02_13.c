// C Programming Foundations Course LinkedIn
// Final Challege of Chapter 2
// Lori Pfahler
// January 2025

#include <stdio.h>
#include <stdlib.h>

int main()
{
  // declare constant ratio equal to 3/4
  const float ratio = 0.75;
  // declare char a and assign
  char a = 'G';
  // declare integer b and assign
  int b = 12;
  // declare float c and assign
  float c = 34.85;

  // output char value, e.g., "the value of variable a is '?'"
  printf("the value of variable a is %c\n", a);
  // output integer value, e.g., "the value of variable b is ??"
  printf("the value of variable b is %i\n", b);
  // output float value, e.g., "the value of variable c is ???.??"
  printf("the value of variable c is %.2f\n", c);
  // output value of ratio, e.g., "the value of constant ratio is ???.??"
  printf("the value of constant ratio is %.2f\n", ratio);

  printf("question 1 %f\n", (float)a);

  return 0;
}
