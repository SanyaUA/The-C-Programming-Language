/*
**
** Converts upper case letters to lower case, with a conditional expression instead of if-else.
**
*/
#include <stdio.h>

int lower(int symbol)
{
  return symbol = (symbol >= 'A' && symbol <= 'Z') ? symbol : symbol ^ ' ';
}

