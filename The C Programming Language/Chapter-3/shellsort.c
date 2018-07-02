/*
**
** Shell sort algorithm.
**
*/

#include <stdio.h>

void printarr(int v[], int n);
void shellsort(int v[], int n);

int main()
{
  int v[10] = {2, 1, 7, 9, 5, 4, 3, 8, 9, 11};
  printf("Input:  ");
  printarr(v, 10);

  printf("\nOutput: ");
  shellsort(v, 10);
  printarr(v, 10);

  return 0;
}

void shellsort(int v[], int n)
{
  int gap, i, j, temp;

  for (gap = n / 2; gap > 0; gap /= 2)
    for (i = gap; i < n; i++)
      for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
      {
	temp = v[j];
	v[j] = v[j + gap];
	v[j + gap] = temp;
      }
}
void printarr(int v[], int n)
{
  for (int i = 0; i < n; ++i)
    printf("%d ", v[i]);
}
