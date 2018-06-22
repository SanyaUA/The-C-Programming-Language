/*
**
** Prints out a histogram of the sequencies of different characters in its input.
**
*/
#include <stdio.h>

#define COUNT_VISIBLE_CHARACTERS 95

int main()
{
  int c, chars[COUNT_VISIBLE_CHARACTERS];

  for (int i = 0; i < COUNT_VISIBLE_CHARACTERS; ++i)
     chars[i] = 0;

  while ((c = getchar()) != EOF)
     chars[c - ' ']++;
	
  for (int i = 0; i < COUNT_VISIBLE_CHARACTERS; ++i)
  {
     if (chars[i] == 0)
	continue;
     putchar(i + ' ');
     putchar(':');
     for (int j = 0; j < chars[i]; ++j)
	putchar('|');
	putchar('\n');
  }
	return 0;
}
