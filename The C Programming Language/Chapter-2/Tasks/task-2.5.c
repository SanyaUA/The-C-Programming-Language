/*
**
** Returns the first location in the first string where any character from the second string occurs or
** -1 if first string contains no characters from second string.
**
*/
#include <stdio.h>
#include <limits.h>

int any(char s1[], char s2[]);

int main()
{
  char s1[6] = "Hello";
  char s2[4] = "elo";

  int index = any(s1, s2);
  printf("Index any of ('%s') in '%s' = %d\n", s2, s1, index);
  return 0;
}
int any(char s1[], char s2[])
{
  int min = INT_MAX; 
  for (int i = 0; s2[i] != '\0'; ++i)
  {
    for (int j = 0; s1[j] != '\0'; ++j)
    {
      if (s1[j] == s2[i])
      {
	if (min > j)
	  min = j;
      }
    }
  }
  
  return min;
}
 
