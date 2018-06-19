/*
**
** Copies input stream to output stream.
**
*/
#include <stdio.h>

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    putchar(c);
}
