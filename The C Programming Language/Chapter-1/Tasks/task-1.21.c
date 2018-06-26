/*
**
** Replace strings of blanks by the minimum number of tabs and blanks to achive the same spacing.
**
*/
#include <stdio.h>
#include <stdbool.h>

#define TAB '\t'
#define BLANK ' '

#define MAXLENGTH 1000
#define BLANKS_PER_TAB 2

int getlines(char s[], int lim);
bool isspaceline(char s[], int length);

int main()
{
  int len;

  char line[MAXLENGTH];

  while ((len = getlines(line, MAXLENGTH)) > 0)
  {
    if (isspaceline(line, len))
    {
      int count_blanks = len - 1;
      if (count_blanks < BLANKS_PER_TAB)
          for (int i = 0; i < count_blanks; ++i)
	      putchar(BLANK);
      else
      {
	  int count_tabs = count_blanks / BLANKS_PER_TAB;
          count_blanks = (count_tabs * BLANKS_PER_TAB) % BLANKS_PER_TAB;
	
	  for (int i = 0; i < count_tabs * BLANKS_PER_TAB; ++i)
	    putchar(' ');
	  for (int i = 0; i < count_blanks; ++i)
	    putchar(BLANK);
      }
    } else {
      printf("%s", line);
    }
  }

  return 0;
}
/*
**
** Read line from user.
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
** Return true if line consists only blanks character.
**
*/
bool isspaceline(char s[], int length)
{
  for (int i = 0; i < length - 2; ++i)
    if (s[i] != BLANK)
      return false;
  
  return true;
}
    
