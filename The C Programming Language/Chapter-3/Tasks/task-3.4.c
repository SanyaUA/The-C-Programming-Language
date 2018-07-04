/*
**
** Converts integer to string.
** When n = INT_MIN = -2^(8 * sizeof(int)) - 1.
** -n - results overflow, because -n > INT_MAX.
**
*/
#include<stdio.h>
#include<string.h>
#include<limits.h>

void reverse(char s[]);
void itoa(int n, char s[]);

int main(void)
{
  int n = INT_MIN;
  char s[9];

  itoa(n, s);
  printf("%d = \'%s\'\n", n, s);
  return 0;
}
void itoa(int n, char s[])
{
  long long tmp = n;
  int i, sign;

  if ((sign = tmp) < 0)
    tmp = -tmp;

  i = 0;
  do
  {
    s[i++] = tmp % 10 + '0';
  } while ((tmp /= 10) > 0);

  if (sign < 0)
    s[i++] = '-';

  s[i] = '\0';
  reverse(s);
}

void reverse(char s[])
{
  int c, i , j;
  for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  } 
}
