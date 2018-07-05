/*
**
** Returns the position of the rightmost occurence of t in s, or -1 if there is none.
**
*/
#include <stdio.h>

#define NOT_FOUND -1
#define MAXLINE 1000

char pattern[] = "ould";

int getlines(char line[], int max);
int strrindex(char source[], char searchfor[]);

int main()
{
  char line[MAXLINE];
  int found = 0;
  
  int index = -1;
  while (getlines(line, MAXLINE) > 0)
    if ((index = strrindex(line, pattern)) >= 0) 
    {
      printf("\'%s\' founded at index %d\n", pattern, index);
      found++;
    }

  return 0;
}

int getlines(char s[], int lim)
{
  int c, i;

  i = 0;
  while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
    s[i++] = c;
  if (c == '\n')
    s[i++] = c;
  s[i] = '\0';

  return i;
}

// return index of t in s, -1 if none
int strrindex(char s[], char t[])
{
  int i, j, k;
  int index = NOT_FOUND;

  for (i = 0; s[i] != '\0'; i++)
  {
    for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (k > 0 && t[k] == '\0')
      index = i;
  }
  return index;
}
