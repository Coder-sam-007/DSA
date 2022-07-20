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
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  int size = sizeof(arr) / sizeof(arr[0]);
  printf("The array is :\n");
  display(arr, size);

  int element, position;
  printf("\n\nEnter the element you want to insert in this array: ");
  scanf("%d", &element);
  printf("\nEnter the position of the element: ");
  scanf("%d", &position);

  insert(arr, size, element, position);
  printf("\nAfter Insertion the array is: \n");
  display(arr, size + 1);

  return 0;
}