/*
**
** Converts integer to string.
**
*/
/*
**
** Converts the integer n into a base n character representation.
**
*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itob(int n, char s[], int base);

int main(void)
{
  int n = 255;
  char s[20];

  itob(n, s, 2);
  printf("%d = \'%s\'\n", n, s);
  return 0;
}
void itob(int n, char s[], int base)
{
  int i, sign;

  if ((sign = n) < 0)
    n = -n;

  i = 0;
  do
  {
     s[i++] = (n % base) < 10 ? (n % base + '0') : (n % base - 10 + 'A');
  } while ((n /= base) > 0);

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
