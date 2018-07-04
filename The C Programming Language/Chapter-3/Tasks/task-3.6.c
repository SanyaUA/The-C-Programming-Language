/*
**
** Version of itoa that accepts three arguments instead of two.
** The third argument is a minimum field width; the converted number must be padded
** with blanks on the left if necessary to make it wide enough.
**
*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);
void itoa(int n, char s[], int width);

int main(void)
{
  int n = 12456987;
  char s[16];

  itoa(n, s, 10);
  printf("%d = \'%s\'.\n", n, s);
  return 0;
}
void itoa(int n, char s[], int width)
{
  int i, sign;
  long long tmp = n;

  if ((sign = tmp) < 0)
    tmp = -tmp;

  i = 0;
  do
  {
    s[i++] = tmp % 10 + '0';
  } while ((tmp /= 10) > 0);

  if (sign < 0)
    s[i++] = '-';

  int length = strlen(s);
  while (length < width)
  {
    s[i++] = ' ';
    length++;
  }
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
