/*
**
** Experiment to find out what happens when printf's argument
** string contains \c, where c is some character not listed above.
**
*/
#include <stdio.h>

int main()
{

  // Error: uknown escape sequence: '\d'
  printf("hello, world\d");

  return 0;
}
