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
    printf("The data is: %d\n", ptr->data);
    ptr = ptr->next;
  }
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

  one->data = 12;
  two->data = 22;
  three->data = 32;
  four->data = 42;

  head = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  printf("\n\nThe created Linked list is: ");
  display(head);

  return 0;
}