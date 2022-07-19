#include <stdio.h>
#include <stdlib.h>

int main()
{
<<<<<<< HEAD

  int myArr[10] = {1, 2, 5, 4, 3, 3, 4, 5, 1, 2};

  printf("Your array is:\n");

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", myArr[i]);
  }

  printf("\n\nIn the above array the repeated elements are:\n\n");

  int count = 0, k;

  for (int j = 0; j < 10; j++)
  {
    for (k = 0; k < 10; k++)
    {
      if (myArr[j] == myArr[k])
      {
        count++;
      }
    }

    printf(" the element %d is repeated %d times\n", myArr[j], count);
    count = 0;
=======
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
>>>>>>> 209ce6631ed69da9dab7e33246e4cdb1667464a8
  }

  return 0;
}