// C Programming Foundations Course LinkedIn
// Comparing the impact of e vs E is specifying floats
// Lori Pfahler
// January 2025

#include <stdio.h>

int main(void)
{
  printf("E: %f\n", 2.56E6);
  printf("e: %f\n", 2.56e6);
  printf("E: %f\n", 2.56E-6);
  printf("e: %f\n", 2.56e-6);

  printf("G: %G\n", 2.56E6);
  printf("g: %g\n", 2.56e6);
  printf("G: %G\n", 2.56E-6);
  printf("g: %g\n", 2.56e-6);

  printf("lf: %lf\n", 2.56E6);
  printf("lf: %lf\n", 2.56e-6);
  
  return 0;
}