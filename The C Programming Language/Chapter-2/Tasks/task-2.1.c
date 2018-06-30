/*
**
** Prints out the ranges of char, short, int and long variables,
** both signed and unsigned, by printing appropriate values from
** standard headers and by direct computation.
**
*/
#include <math.h>
#include <stdio.h>
#include <limits.h>

void ranges(void);
void compute_ranges(void);

int main()
{
  ranges();
  compute_ranges();
  return 0;
}
// Prints out ranges from limits.h header.
void ranges(void)
{
  printf("\t***** RANGES FROM limits.h *****\n");
  printf("CHAR_MIN  = %d\n", CHAR_MIN);
  printf("CHAR_MAX  = %d\n", CHAR_MAX);

  printf("SCHAR_MIN = %d\n", SCHAR_MIN);
  printf("SCHAR_MAX = %d\n", SCHAR_MAX);

  printf("SHRT_MIN  = %d\n", SHRT_MIN);
  printf("SHRT_MAX  = %d\n", SHRT_MAX);

  printf("INT_MIN   = %d\n", INT_MIN);
  printf("INT_MAX   = %d\n", INT_MAX);

  printf("LONG_MIN  = %ld\n", LONG_MIN);
  printf("LONG_MAX  = %ld\n", LONG_MAX);
}
// Prints out ranges of char, short, int and long.
void compute_ranges(void)
{
  int char_size = CHAR_BIT;
  
  printf("\t***** COMPUTED RANGES *****\n");
  printf("CHAR_MIN = %d\n", -(int) pow(2, char_size - 1));
  printf("CHAR_MAX = %d\n", (int) pow(2, char_size - 1) - 1);
  
  printf("SHRT_MIN = %d\n", -(int) pow(2,2 * char_size - 1));
  printf("SHRT_MAX = %d\n", (int) pow(2, 2 * char_size - 1) - 1);

  printf("INT_MIN  = %d\n", -(int) pow(2, 4 * char_size - 1));
  printf("INT_MAX  = %d\n", (int) pow(2, 4 * char_size - 1) - 1);

  printf("LONG_MIN = %ld\n", -(long) pow(8, 8 * char_size - 1));
  printf("LONG_MAX = %ld\n", (long) pow(8, 8 * char_size - 1) - 1);
}

