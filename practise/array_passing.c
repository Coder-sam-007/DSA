// passing an array to a function as parameter throuh pointer mechanism

#include <stdio.h>

void display(int *arr)
{
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", *(arr + i));

    // printf("%d ", arr[i]); -- this works too..
  }
}
int main()
{
  int arr[5] = {1, 34, 23, 112, 12};

  display(&arr[0]);

  //  display(arr); -- this is same as above function call. when we directly pass the array name, it automatically extract the address of the first element.

  return 0;
}