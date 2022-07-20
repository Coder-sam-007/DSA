#include <stdio.h>

void display(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}

int arraySearch(int arr[], int size, int element)
{
  int position = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == element)
    {
      position = i + 1;
    }
  }

  return position;
}

int main()
{
  int arr[10] = {12, 354, 1, 45, 67, 89, 90, 128, 85, 17};
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("The array is :\n");
  display(arr, size);

  int element, position;
  printf("\n\nEnter the element you want to search in this array: ");
  scanf("%d", &element);

  int index = arraySearch(arr, size, element);

  if (index != 0)
    printf("\nYour given element %d found in the array at position %d.", element, index);
  else
    printf("You have entered an element which is not present in the array.");

  return 0;
}