/*
**
** Converts characters line newline and tab into visible escape sequence(\n and \t).
**
*/
#include <stdio.h>

#define TAB '\t'
#define NEW_LINE '\n'

#define MAX_LENGTH 1000

int count_escapes(char s[]);

void escape(char s[], char t[]);
int getlines(char s[], int lim);

int main()
{
  int len;
  char line[MAX_LENGTH];

  while ((len = getlines(line, MAX_LENGTH)) > 0)
  {
    int count = count_escapes(line);
    char escapes[len + count * 2];
    escape(escapes, line);
    printf("%s", escapes);
  }
  return 0;
}
void escape(char s[], char t[])
{
  int j = 0, i = 0; 
  while ((s[j++] = t[i++]) != '\0')
  {
    switch (t[i])
    {
      case NEW_LINE:
	s[j++] = '\\';
	s[j++] = 'n';
	break;
      case TAB:
        s[j++] = '\\';
        s[j++] = 't';
        i++;
        break;
    }
  }
}
int count_escapes(char s[])
{
  int i = 0; 
  int count = 0;
  while (s[i] != '\0')
  {
    if (s[i] == '\n' || s[i] == '\t')
      count++;
    ++i;
  }
  return count;
}

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
