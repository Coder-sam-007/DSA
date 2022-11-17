#include <stdio.h>

int search(int arr[], int num)
{
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] == num)
    {
      printf("Element found on index: %d", i + 1);
      return 1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {12, 43, 13, 3, 1};

  search(arr, 3) == 1 ? printf(" ") : printf("Element not found\n");

  return 0;
}