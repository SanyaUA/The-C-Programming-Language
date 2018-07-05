/*
**
** Converts string to double.
**
*/
#include <math.h>
#include <ctype.h>
#include <stdio.h>

double atof(char s[]);

int main()
{
  char s[10] = "123.45e-6";

  printf("\'%s\' = %f\n", s, atof(s));
  return 0;
}
double atof(char s[])
{
  double val, power, second_power;
  
  int i, sign;

  for (i = 0; isspace(s[i]); i++)
    ;

  sign = (s[i] == '-') ? -1 : 1;
  if (s[i] == '+' || s[i] == '-')
    i++;

  for (val = 0.0; isdigit(s[i]); i++)
    val = 10.0 * val + (s[i] - '0');
  if (s[i] == '.')
    i++;
  for (power = 1.0; isdigit(s[i]); i++)
  {
    val = 10.0 * val + (s[i] - '0');
    power *= 10;
  }

 if (s[i] == 'e' || s[i] == 'E')
  {
    i++;
    sign = (s[i] == '-') ? -1 : 1;
  }
  second_power = s[++i] - '0';
printf("second power = %c\n",s[i]);

  return (sign * val / power) * pow(10.0, sign * second_power);
}
