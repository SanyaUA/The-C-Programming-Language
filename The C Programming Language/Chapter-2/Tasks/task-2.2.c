/*
**
** Rewrite loop without using && or ||.
**
*/
#include <stdio.h>

#define MAXLENGTH 1000

int getlines(char line[], int lim);

int main(void)
{
  int len;
  char line[MAXLENGTH];

  while ((len = getlines(line, MAXLENGTH)) > 0)
  {
    printf("%s", line);
  }
  return 0;
}
int getlines(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1, (c = getchar()) != '\n', c != EOF; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = c;
  return i;
}
