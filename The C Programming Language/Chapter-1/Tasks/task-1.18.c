/*
**
** Remove trailing blanks and tabs from each line of input.
** And delete entirely blank lines.
**
*/
#include <stdio.h>

#define MAXLINE 1000   /* maximum input line size */

int getlines(char line[], int maxline);
void delete_trailing_blanks(char line[], int length);

int main()
{
  int len;
  
  char line[MAXLINE];

  while((len = getlines(line, MAXLINE)) > 0)
  {
    delete_trailing_blanks(line, len);
    printf("%s", line);
  }
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
** Deleting trailing blanks and tabs.
**
*/
void delete_trailing_blanks(char line[], int length)
{
  int i = length - 1;
  while (line[i] == ' ' || line[i] == '\t')
    i--;
  line[i + 1] = '\0';
}

