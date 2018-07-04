/*
**
** Binary search algorithm.
**
*/
int binsearch(int x, int v[], int n);

int main()
{
  return 0;
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n - 1;

  while (low <= heigh)
  {
    mod = (low + heigh) / 2;
    if (x < v[mid])
      hign = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}
