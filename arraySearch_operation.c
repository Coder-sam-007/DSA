#include <stdio.h>
int main()
{
  int p = 0, n;
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  printf("the given array is \n");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n enter the no you want to search in the array");
  scanf("%d", &n);
  for (int i = 0; i < 10; i++)
  {
    if (n == a[i])
    {
      p = i + 1;
    }
  }
  if (p != 0)
  {
    printf("the given no %d is present in the position %d", n, p);
  }
  else
  {
    printf("the given no is not present in the given array");
  }
  return 0;
}