/*
**
** Prints out all input lines which are longer than 80 characters.
**
*/
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

void copy(char to[], char from[]);
int getlines(char line[], int maxline);

int main()
{
  int len;
  int out;
  
  char line[MAXLINE];

  out = 80;
  while((len = getlines(line, MAXLINE)) > 0)
      if (len >  out)
	printf("Line with length more than 80 chars: %s\n", line);
  return 0;
}
/*
** 
** Read a line into s, return length.
**
*/
int getlines(char s[], int lim)
{
  int c, i;
  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';

  return i;
}
/*
**
** Copy 'from' into 'to'.
**
*/
void copy(char to[], char from[])
{
  int i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
