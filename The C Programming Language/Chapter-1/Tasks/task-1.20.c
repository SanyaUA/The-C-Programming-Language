/*
**
** Replace tabs in the input with the proper number of blanks to space to the next tab stop.
**
*/
#include <stdio.h>

#define TAB '\t'
#define BLANK ' '

#define BLANKS_PER_TAB 2

int main()
{
  int c;

  while ((c = getchar()) != EOF)
    if (c == TAB)
      for (int i = 0; i < BLANKS_PER_TAB; ++i)
	putchar(BLANK);
    else
      putchar(c);

  return 0;
}
      
