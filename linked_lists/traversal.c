#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void display(struct node *ptr)
{
  while (ptr != NULL)
  {
    printf("%d ", ptr->data);
    ptr = ptr->next;
  }
}

int main()
{

  struct node *head;
  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));
  struct node *three = malloc(sizeof(struct node));
  struct node *four = malloc(sizeof(struct node));
  struct node *five = malloc(sizeof(struct node));

  one->data = 12;
  two->data = 121;
  three->data = 312;
  four->data = 122;
  five->data = 142;

  head = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = five;
  five->next = NULL;

  printf("\n\nThe created Linked list is: ");
  display(head);

  return 0;
}