/*
**
** Print a histogram of the lengths of words in its input. 
** Draw the histogram with the bars horizonta.
**
*/
#include<stdio.h>
 
#define IN  1  /* inside a word */
#define OUT 0 /* outside a word*/

#define MAX_NUMBER_OF_WORDS 10

int main()
{
  int c, state = OUT;
  int currlength = 0;

  int wlengths[MAX_NUMBER_OF_WORDS];

  for (int i = 0; i < MAX_NUMBER_OF_WORDS; ++i)
    wlengths[i] = 0;
  
  int i = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      wlengths[i++] = currlength;
      currlength = 0;
    } else if (state == OUT) {
      state = IN;
      currlength++;
    } else if (state == IN) {
      currlength++;
    }
  }

  for (int i = 0; i < MAX_NUMBER_OF_WORDS; ++i)
  {
    if (wlengths[i] != 0)
    {
      for (int j = 0; j < wlengths[i]; ++j)
	putchar('|');
      putchar('\n');
    }
  }

  return 0;
}
