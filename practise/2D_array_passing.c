#include <stdio.h>

void display(int row, int col, int arr[][col])
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}
int main()
{
  int arr[][2] = {{22, 24},
                  {12, 16}};

  display(2, 2, arr);
  return 0;
}