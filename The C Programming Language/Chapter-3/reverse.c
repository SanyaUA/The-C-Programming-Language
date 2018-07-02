/*
**
** Reverse string s in place.
**
*/
#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main()
{
  char s[6] = "Hello";
  printf("s = %s\n", s);
  reverse(s);
  printf("reverse s = %s\n", s);
  return 0;
}
void reverse(char s[])
{
  int c, i, j;

  for (i = 0, j = strlen(s) - 1; i < j; i++, j--)
  {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
}
