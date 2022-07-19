#include <stdio.h>
int main()
{

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
  }

  return 0;
}