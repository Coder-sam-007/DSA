#include <stdio.h>
#define MAX 5

static int stack[MAX], top = -1;

int isEmpty()
{
  if (top == -1)
    return 1;
  else
    return 0;
}

int isFull()
{
  if (top == MAX)
    return 1;
  else
    return 0;
}

void push(int num)
{

  if (isFull())
    printf("\nStack is full we can't push more elements");

  else
  {
    top++;
    stack[top] = num;
    printf("\n%d is pushed into the stack", stack[top]);
  }
}

void pop()
{
  if (isEmpty())
  {
    printf("\nstack is empty pop operation can't be done");
  }
  else
  {
    printf("\n%d is popped out from the stack", stack[top]);
    stack[top] = 0;
    top--;
  }
}

void showStack()
{
  printf("\n\nElements present in the stack are: ");
  for (int i = 0; i <= top; i++)
  {
    printf("%d ", stack[i]);
  }
}
int main()
{
  push(12);
  push(10);
  push(8);
  push(4);
  push(2);
  push(1);

  push(100);
  push(89);

  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();
  pop();

  showStack();

  return 0;
}