/*
**
** Converts escape sequences into real characters.
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
  while ((s[i] = t[i]) != '\0')
  {
    if (t[i] == '\\')
    {
      switch (t[i + 1])
      {
        case 'n':
	  s[i] = '\n';
	   for (int k = i; t[k] != '\0'; ++k)
	    t[k] = t[k + 1];
	  break;
        case 't':
	  s[i] = '\t';
	  for (int k = i; t[k] != '\0'; ++k)
	    t[k] = t[k + 1];
	  break;
      }
    }
    ++i;
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
  s[i] = '\0';
  return i;
}
