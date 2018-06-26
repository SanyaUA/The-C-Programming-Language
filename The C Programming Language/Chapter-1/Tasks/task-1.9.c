/*
**
** Copy it's input to it's output, replacing each string of one or more blanks by a single blank.
**
*/
#include <stdio.h>

#define IN  1
#define OUT 0

#define SPACE ' '

int main()
{
  int state = OUT;
  int c;

  while ((c = getchar()) != EOF)
  {
    if (c == SPACE && state == OUT)
    {
      state = IN;
      putchar(c);
      continue;
    } else if (state == IN)
    {
      if (c != SPACE)
      {
	putchar(c);
	state = OUT;
      }
      continue;
    }
    putchar(c);
  }

  return 0;
}
