/*
**
** Copies character from the input stream to output stream.
**
*/
#include <stdio.h>

int main()
{
  int c;
  
  c = getchar();
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
  
  return 0;
}
