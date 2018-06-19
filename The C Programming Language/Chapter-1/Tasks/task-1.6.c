/*
**
** Verify that expression getchar() != EOF is 0 or 1.
**
*/
#include <stdio.h>

int main()
{
  int c;
  
  while(1)
  {
    printf("getchar() != EOF ---> %d\n", getchar() != EOF);
  }
  
  return 0;
}
