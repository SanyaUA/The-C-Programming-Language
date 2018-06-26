/*
**
** Print longest input line.
**
*/
/*
**
** Prints out longest line as much as possible.
**
*/
#include <stdio.h>

#define START_MAXLENGTH 1000   /* start input line size */

int tmplength = START_MAXLENGTH;

void update(void);
void copy(char to[], char from[]);
int getlines(char line[], int maxline);

int main()
{
  int len;
  int max;
  
  char line[START_MAXLENGTH];
  char longest[START_MAXLENGTH];

  max = 0;
  while((len = getlines(line, tmplength)) > 0)
  {
      if (len > max)
      {
	 max = len;
	 copy(longest, line);
      }
  }
  if (max > 0) 
     printf("%s", longest);
  return 0;
}
/*
**
** Update tmp length.
**
*/
void update(void)
{
  tmplength *= 2;
}
/*
** 
** Read a line into s, return length.
**
*/
int getlines(char s[], int lim)
{
  int c, i;
  for (i = 0;(c = getchar()) != EOF && c != '\n'; ++i)
  {
    if (i == tmplength - 1) 
      update();
    s[i] = c;
  }
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
