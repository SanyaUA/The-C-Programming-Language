/*
**
** Expands shorthand notations like a-z in the string s1 into the equivalent complete list abc...xyz in s2.
** Allow for letters of either case and digits, and prepared to handle cases like a-b-c and a-z0-9 and -a-z.
** Leading or trailing - is taken literally.
**
*/
#include <stdio.h>
#include <ctype.h>

#define MAX_LENGTH 100

void expand(char s1[], char s2[]);

int main()
{
  char s1[7] = "a-z0-9";
  char s2[4] = "A-Z";
  char s3[8] = "0-4-6-9";
  char s4[MAX_LENGTH];
  
  expand(s1, s4);
  printf("%s = %s\n",s1, s4);
  expand(s2, s4);
  printf("%s = %s\n",s2, s4);
  expand(s3, s4);
  printf("%s = %s\n",s3, s4);

  return 0;
}
void expand(char s1[], char s2[])
{
  int i = 0;
  int j = 0;
  while (isspace(s1[i]))
    s2[j++] = s1[i++];

  while (s1[i] == '-')
    s2[j++] = s1[i++];
  
  char begin;
  char end;

  while (s1[i] != '\0')
  {
    if ((s1[i] <= 'a' && s1[i] >= 'z') && (s1[i] <= 'A' && s1[i] >= 'Z') && (s1[i] <= '0' && s1[i] >= '9'))
    {
      while (s1[i] != '\0')
        s2[j++] = s1[i++];
    } 
    else
    {
      begin = s1[i];
      i++;
      if(end == begin) begin++;
      if (s1[i] != '-')
      {
        while (s1[i] != '\0')
	  s2[j++] = s1[i++];
      }
      else
      {
	i++;
	if ((s1[i] <= 'a' && s1[i] >= 'z') && (s1[i] <= 'A' && s1[i] >= 'Z') && (s1[i] <= '0' && s1[i] >= '9'))
        {
	  while (s1[i] != '\0')
	    s2[j++] = s1[i++];
	}
	if (s1[i+1] == '-')
	  end = s1[i];
	else
	  end = s1[i++];
        while (begin <= end)
        {
	  s2[j++] = (char)begin;
	  begin++;
        }
      }
    }
  }
  s2[j] = '\0';
}
