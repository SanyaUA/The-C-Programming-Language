/*
**
** Use function for conversion temperature.
**
*/
#include <stdio.h>

int fahrtocels(int fahr);

int main()
{
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) 
  {
    printf("%d\t%d\n", fahr, fahrtocels(fahr));
    fahr = fahr + step;
  }
  
  return 0;
}
/*
**
** Convert fahrenheit to celsius.
**
*/
int fahrtocels(int fahr)
{
  return 5 * (fahr - 32) / 9;
}
