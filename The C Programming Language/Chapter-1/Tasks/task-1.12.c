/*
**
** Prints it's input one word per line.
**
*/
#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
  int c, nc = 0,
         nw = 0,
         nl = 0;
  
  int state = OUT;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c  == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      putchar('\n');
      continue;
    }
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
    putchar(c);
  }
  return 0;
}
