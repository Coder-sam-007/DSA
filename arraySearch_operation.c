#include <stdio.h>
int main()
{
  int myArray[10] = {9, 8, 3, 4, 7, 6, 5, 2, 8, 10};

  printf("\n\n My array is: \n");

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", myArray[i]);
  }

  int searchValue;
  printf("\nEnter a value to search it inside the array and find it's postion: \n");
  scanf("%d", &searchValue);

  for (int i = 0; i < 10; i++)
  {
    if (myArray[i] == searchValue)
    {
      printf("we found your element (%d) at %dth position\n", myArray[i], i + 1);
    }
    else
      printf("\nYou must Provide an element which is present in the array");
    break;
  }

  return 0;
}