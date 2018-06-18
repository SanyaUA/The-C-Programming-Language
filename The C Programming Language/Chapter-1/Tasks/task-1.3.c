/*
**
** The output table temperature Fahrenheit and Celsius with float
** for fahr = 0, 20, ..., 300.
**
*/
#include <stdio.h>

int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step  = 20;

  printf("\n***** TABLE TEMPERATURE *****\n");
  fahr = lower;
  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}
