#include <stdio.h>
#define MAX 3
static int stack[MAX], top = -1;

void push(int num)
{

  if (top + 1 == MAX)
  {
    printf("Stack is full..\nOperation failed!\n");
  }
  else
  {
    top++;
    stack[top] = num;
    printf("%d is added to the stack\n", stack[top]);
  }
}

void pop()
{

  if (top == -1)
  {
    printf("Stack is empty..\nOperation failed!\n");
  }
  else
  {
    printf("%d is popped\n", stack[top]);
    stack[top] = 0;
    top--;
  }
}

void display()
{
  printf("\nThe elements of the stack are: ");
  for (int i = 0; i <= top; i++)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");
}
int main()
{

  printf("\n---- Stack Implementation Using Array ----\n");
  int choice, num;

  do
  {
    printf("Choose your option: \n1.Push operation\n2.Pop operation\n3.Display stack operation\n0.to exit\n\nWrite here:");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("Enter the number that you want to push: ");
      scanf("%d", &num);
      push(num);
      break;

    case 2:
      pop();
      break;

    case 3:
      display();
      break;

    case 0:
      printf("bye.. bye..\n");
      break;

    default:
      printf("Wrong Input");
    };
  } while (choice != 0);

  return 0;
}