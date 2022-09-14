#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

void display(struct node *last)
{
  struct node *ptr = last->next;

  do
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  } while (ptr != last->next);
}

int main()
{
  struct node *last;
  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));
  struct node *three = malloc(sizeof(struct node));
  struct node *four = malloc(sizeof(struct node));

  one->data = 12;
  two->data = 102;
  three->data = 112;
  four->data = 122;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = one;

  last = four;

  display(last);

  return 0;
}