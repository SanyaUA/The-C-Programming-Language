/*
**
** Copy it's input to it's output, replacing each tab by \t,
** each backspace \b, and each backslash \\.
**
*/

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

#include <stdio.h>
int main()
{
  int c;
  
  while((c = getchar()) != EOF)
    if (c == TAB)
      printf("\\t");
    else if (c == BACKSPACE)
      printf("\\b");
    else if (c == BACKSLASH)
      printf("\\");

  return 0;
}
  
