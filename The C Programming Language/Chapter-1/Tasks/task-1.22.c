/*
**
** Fold long input lines into two or more shorter lines after the last non-blank character that occurs
** before n-th column of input.
**
** Example: n = 7.
** String: Hello world!
** Result Hello w...ld!
**
*/
#include <stdio.h>

#define MAXLENGTH 1000
#define FOLD_COLUMN 5

int getlines(char s[], int lim);
void fold(char line[], int length);

int main()
{
  int len;
  
  char line[MAXLENGTH];
  
  while ((len = getlines(line, MAXLENGTH)) > 0)
  {
    fold(line, len);
    printf("%s", line);
  }

  return 0;
}
/*
**
** Fold string after FOLD_COLUMN.
**
*/
void fold(char line[], int length)
{
  if (length <= FOLD_COLUMN + 6)
    return;
  else
  {
    int column = FOLD_COLUMN;
    while (line[column] == '\t' || line[column] == ' ')
      column--;
    line[column] = line[column + 1] = line[column + 2] = '.';
    line[column + 3] = line[length - 3];
    line[column + 4] = line[length - 2];
    line[column + 5] = line[length - 1];
    line[column + 6] = '\0';
  }
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
