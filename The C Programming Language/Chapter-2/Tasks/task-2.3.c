/*
**
** Converts a string of hexadecimal digits (including an optional 0x or 0X) into
** its equivalent integer value.
**
*/
#include <stdio.h>
#include <ctype.h>

long long htoi(char s[], int n);

int main()
{
  char * s1 = "0xff";
  char * s2 = "0Xff";
  char * s3 = "1f2c6E";

  printf("%s = %lld\n", s1, htoi(s1, 4));
  printf("%s = %lld\n", s2, htoi(s2, 4));
  printf("%s = %lld\n", s3, htoi(s3, 6));

  return 0;
}
/*
**
** Converts a string of hexadecimal digits into integer value.
**
*/
long long htoi(char s[], int n)
{
  unsigned long long res = 0;
  
  int start_index = 0; 
  if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
    start_index = 2; 
 
  for (int i = start_index; i < n && isdigit(s[i]) || (s[i] >= 'A' && s[i] <= 'F') || (s[i] >= 'a' && s[i] <= 'f'); ++i)
  {
    if (isdigit(s[i]))
      res = res * 16 + (s[i] - '0');
    else if (isupper(s[i]))
      res = res * 16 + (s[i] - 'A' + 10);
    else 
      res = res * 16 + (s[i] - 'a' + 10);
  }

  return res;
}

