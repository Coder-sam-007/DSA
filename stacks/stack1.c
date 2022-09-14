#include <stdio.h>
static int stack[10], top = -1;

void push(int j)
{
  top++;
  stack[top] = j;
  printf("%d is pushed into the stack\n", j);
}
void pop()
{
  printf("\n%d is popped from the stack\n", stack[top]);
  stack[top] = 0;
  top--;
}
void show()
{
  printf("\nStack elements are: ");
  for (int j = 0; j <= top; j++)
    printf("%d ", stack[j]);
}
int main()
{
  printf("Stack Operations: \n\n");
  push(9);
  push(6);
  push(9);
  show();

  pop();
  show();

  pop();
  show();

  return 0;
}
