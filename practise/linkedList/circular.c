#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void display(struct node *last)
{
  struct node *ptr;
  ptr = last->next;

  do
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  } while (ptr != last->next);
}
int main()
{

  struct node *last;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  struct node *four = NULL;

  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  four = malloc(sizeof(struct node));

  one->data = 12;
  two->data = 17;
  three->data = 12;
  four->data = 92;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = one;

  last = four;

  display(four);

  return 0;
}