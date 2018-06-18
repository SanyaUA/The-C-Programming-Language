/*
**
** The output table temperature Fahrenheit and Celsius with allignments
** for fahr = 0, 20, ..., 300.
**
*/
#include <stdio.h>

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
