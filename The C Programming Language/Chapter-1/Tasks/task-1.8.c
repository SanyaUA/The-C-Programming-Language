/*
**
** Count blanks, tabs and newlines.
**
*/
#include <stdio.h>

#define TAB '\t'
#define SPACE ' '
#define NEW_LINE '\n'

int main()
{
  int c, nl, ns, nt;
  nl = ns = nt = 0;

  while((c = getchar()) != EOF)
    if (c == TAB)
      nt++;
    else if (c == SPACE)
      ns++;
    else if (c == NEW_LINE)
      nl++;

  printf("Tabs - %d, blanks - %d, lines - %d\n", nt, ns, nl);

  return 0;
}
