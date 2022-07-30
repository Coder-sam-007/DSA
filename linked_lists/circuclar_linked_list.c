#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

void display(struct Node *last)
{
  struct Node *p;
  p = last->next;

  do
  {
    printf("%d ", p->data);
    p = p->next;
  } while (p != last->next);
}

int main()
{

  struct Node *last;
  struct Node *one = malloc(sizeof(struct Node));
  struct Node *two = malloc(sizeof(struct Node));
  struct Node *three = malloc(sizeof(struct Node));
  struct Node *four = malloc(sizeof(struct Node));

  one->data = 22;
  two->data = 29;
  three->data = 37;
  four->data = 30;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = one;

  last = four;

  display(last);

  return 0;
}