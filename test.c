#include <stdio.h>
int main()
{
  int myArr[12] = {5, 2, 3, 2, 4, 5, 2, 4, 2, 4, 5, 3};

  printf("my array is: ");

  for (int i = 0; i < 12; i++)
  {
    printf(" %d  ", myArr[i]);
  }

  printf("\n");

  int count[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, j;

  for (i = 0; i < 12; i++)
  {
    int ab = myArr[i];
    for (j = 0; j < 12; j++)
    {
      if (myArr[j] == ab)
      {
        count[j]++;
      }
    }
    int countValue = count[j];
    printf("%d ", countValue);

    printf("The element %d is repeated %d times\n", myArr[i], countValue);
  }

  return 0;
}
