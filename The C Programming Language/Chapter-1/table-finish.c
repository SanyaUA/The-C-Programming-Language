/*
**
** Output table of temperature with using naming constants.
**
*/
#include <stdio.h>

#define STEP 20
#define LOWER 0
#define UPPER 300

int main()
{
  int fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));

  return 0;
}
