#include <stdio.h>
#include <stdlib.h>

int main()
{
  int myArray[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < 10; i++)
  {
    printf("%d  ", myArray[i]);
  }

  int x = 50;
  int position = 5;

  for (int i = 10; i >= position; i--)
  {
    myArray[i] = myArray[i - 1];
  }

  myArray[position - 1] = x;

  for (int i = 0; i < 11; i++)
  {
    printf("%d  ", myArray[i]);
  }

  return 0;
}
