/*
**
** Deletes each character in s1 that matches any character in the string s2.
**
*/
#include <stdio.h>

void squeeze(char s1[], const char s2[]);

int main()
{
  char s1[6] = "Hello";
  char s2[3] = "lo";

  squeeze(s1, s2);
  printf("%s\n", s1);
  return 0;
}

void squeeze(char s1[], const char s2[])
{
  int m = 0;
  for (int j = 0; s2[j] != '\0' ; j++)
  {
    for (int k = 0; s1[k] != '\0'; k++)
    {
      if (s1[k] != s2[j])
      {
	s1[m++] = s1[k];
      } 
    }
    s1[m] = '\0';
    m = 0;
  } 
}
