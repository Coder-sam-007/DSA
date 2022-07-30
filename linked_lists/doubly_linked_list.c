#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

void printList(struct node *node)
{
  struct node *last;
  printf("\nTraversal in forward direction \n");
  while (node != NULL)
  {
    printf(" %d ", node->data);
    last = node;
    node = node->next;
  }

  printf("\nTraversal in reverse direction \n");
  while (last != NULL)
  {
    printf(" %d ", last->data);
    last = last->prev;
  }
}

int main()
{

  struct node *head;
  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));
  struct node *three = malloc(sizeof(struct node));
  struct node *four = malloc(sizeof(struct node));

  one->data = 1;
  two->data = 2;
  three->data = 3;
  four->data = 4;

  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  one->prev = NULL;
  two->prev = one;
  three->prev = two;
  four->prev = three;

  head = one;

  printf("\n\nThe created Linked list is: ");
  printList(head);

  return 0;
}