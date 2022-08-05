#include <stdio.h>
int main()
{
  //************ incrementing/decrementing a pointer ***********\\

  int x = 100;
  int *ptr = &x;

  printf("%d is stored in %d\n", x, ptr);
  printf("The next address of ptr is: %d\n", ++ptr);
  printf("The previous address of ptr is: %d\n", --ptr);

  //************ addition/substraction of a constant number to a pointer ************\\

  int arr[5] = {1, 2, 3, 4, 5};
  int *arr_ptr = &arr[0];

  // forward iteration through adding a number to a pointer

  for (int i = 0; i < 5; i++)
  {
    printf("\nthe number %d is located in address: %d", *(arr_ptr + i), arr_ptr + i);
  }

  printf("\n\n");

  // backward iteration through adding a number to a pointer

  int *arr_ptr2 = &arr[4];

  for (int i = 0; i < 5; i++)
  {
    printf("\nthe number %d is located in address: %d", *(arr_ptr2 - i), arr_ptr2 - i);
  }

  printf("\n\n");

  //************ substraction of one pointer from another ***********\\

  // the difference will tell the gap between them

  int arr2[] = {10, 20, 30, 40, 50, 60, 70, 80};

  int *ptrFirst = &arr2[0];
  int *ptrLast = &arr2[7];

  printf("\nThe diffrence between %d and %d is %d\n", ptrFirst, ptrLast, ptrLast - ptrFirst);

  printf("\n\n");

  //************ comparison of pointers ***********\\

  int arr3[] = {12, 24, 16, 32};

  int *a = &arr3[2];
  int *b = &arr3[0] + 2;

  if (a == b)
  {
    printf("both are equal");
  }
  else
    printf("both are unequal");

  return 0;
}