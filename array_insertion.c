#include <stdio.h>
void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}

void insert(int arr[], int size, int element, int position)
{
  for (int i = size; i >= position; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[position - 1] = element;
}
int main()

{
  int arr[11] = {1, 2, 3, 4, 6, 7, 8, 9, 10, 11};

  int size = 10;
  printf("The array is :\n");
  display(arr, size);

  int element = 5;
  int position = 5;

  insert(arr, size, element, position);
  printf("\nAfter Insertion the array is: \n");
  display(arr, size + 1);

  return 0;
}