#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void sort(int arr[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(&arr[j], &arr[j + 1]);
      }
    }
  }
}
int main()
{
  int arr[] = {15, 1, 65, 12, 10};
  int size = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting the array is: ");
  display(arr, size);

  sort(arr, size);
  printf("After sorting the array is: ");
  display(arr, size);
  return 0;
}