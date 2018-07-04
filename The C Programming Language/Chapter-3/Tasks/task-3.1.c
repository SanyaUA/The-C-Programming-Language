/*
**
** Binary search algorithm version with only one test inside the loop.
**
*/
#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
  int v[5] = {0, 1, 2, 3, 4};
  
  int index = binsearch(4, v, 5);
  printf("index = %d\n", index);
  return 0;
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= high)
  {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (v[mid] == x) return mid;
  return -1;
}
