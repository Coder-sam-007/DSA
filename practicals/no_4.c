#include <stdio.h>
#define SIZE 5

int queue[], rear = -1, front = -1;

void enqueue(int num)
{
  if (rear == SIZE - 1)
  {
    printf("\nQueue is full..\n");
  }
  else
  {
    if (front == -1)
      front = 0;
    rear++;
    queue[rear] = num;
    printf("\n%d is inserted..\n", queue[rear]);
  }
}

void dequeue()
{
  if (front == -1)
  {
    printf("\nQueue is empty..\n");
  }
  else
  {
    printf("\n%d is deleted\n", queue[front]);
    front++;
  }
}

void display()
{
  printf("\nThe elements of queue are: ");
  for (int i = front; i <= rear; i++)
  {
    printf("%d ", queue[i]);
  }
}
int main()
{

  printf("\n\nQueue\n\n");

  enqueue(233);
  enqueue(23);
  enqueue(213);

  display();

  dequeue();
  display();

  return 0;
}