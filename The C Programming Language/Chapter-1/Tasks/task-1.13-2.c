/*
**
** Print a histogram of the lengths of words in its input.
** Draw the histogram with a vertical orientation.
**
*/ 
#include <stdio.h>

#define IN  1
#define OUT 0

#define HORIZONTAL_LINE 196
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

  int max = wlengths[0];
  for (int i = 1; i < MAX_NUMBER_OF_WORDS; ++i)
  {
    printf("%d ", wlengths[i]);
    if (wlengths[i] > max)
      max = wlengths[i];
  }

  printf("\n***** HISTOGRAM *****\n");
  for (int i = max; i > 0; --i)
  {
   for (int j = 0; j < MAX_NUMBER_OF_WORDS; ++j)
   {
    if (wlengths[j] == 0)
      continue;
    if (wlengths[j] == i)
    {
      putchar('-');
      wlengths[j]--;
    } else
      putchar(' ');
    }
    putchar('\n');
  }
	return 0;
}
