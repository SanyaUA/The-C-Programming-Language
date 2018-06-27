/*
**
** Prints out the ranges of char, short, int and long variables,
** both signed and unsigned, by printing appropriate values from
** standard headers and by direct computation.
**
*/
#include <stdio.h>
#include <float.h>
#include <limits.h>

void ranges(void);
int main()
{
  ranges();
  return 0;
}
// Prints out ranges.
void ranges(void)
{
  printf("\t***** RANGES *****\n");
  printf("CHAR_MIN = %d\n", CHAR_MIN);
  printf("CHAR_MAX = %d\n", CHAR_MAX);

  printf("SCHAR_MIN = %d\n", SCHAR_MIN);
  printf("SCHAR_MAX = %d\n", SCHAR_MAX);

  printf("SHRT_MIN = %d\n", SHRT_MIN);
  printf("SHRT_MAX = %d\n", SHRT_MAX);

  printf("INT_MIN = %d\n", INT_MIN);
  printf("INT_MAX = %d\n", INT_MAX);

  printf("LONG_MIN = %d\n", LONG_MIN);
  printf("LONG_MAX = %d\n", LONG_MAX);
}

