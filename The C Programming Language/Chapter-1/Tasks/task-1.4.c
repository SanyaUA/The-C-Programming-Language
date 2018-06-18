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

  celsius = lower;
  while (celsius <= upper)
  {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

  return 0;
}
