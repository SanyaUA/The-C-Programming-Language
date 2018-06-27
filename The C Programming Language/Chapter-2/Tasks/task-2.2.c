/*
**
** Rewrite loop without using && or ||.
**
*/
#include <stdio.h>

void getline(char line[], int lim)
{
  //...
  for (i = 0; i < lim - 1, (c = getchar()) != '\n', c != EOF; ++i)
    s[i] = c;
  //...
}
