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

struct node *insert_at_begining(struct node *head, int newData)
{
  struct node *ptr = malloc(sizeof(struct node));
  ptr->data = newData;
  ptr->next = head;

  return ptr;
}

int main()
{

  struct node *head;
  struct node *one = NULL;
  struct node *two = NULL;
  struct node *three = NULL;
  struct node *four = NULL;

  one = malloc(sizeof(struct node));
  two = malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));
  four = malloc(sizeof(struct node));

  one->data = 10;
  two->data = 10;
  three->data = 10;
  four->data = 10;

  head = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  display(head);

  head = insert_at_begining(head, 1000);
  printf("\n\n");

  display(head);

  return 0;
}