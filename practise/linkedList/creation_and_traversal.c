#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *insert(struct node *head, int newData)
{
  struct node *ptr = malloc(sizeof(struct node));
  ptr->data = newData;
  ptr->next = head;

  return ptr;
}

void insert_after_a_node(struct node *prevNode, int newData)
{
  struct node *ptr = malloc(sizeof(struct node));
  ptr->data = newData;

  ptr->next = prevNode->next;
  prevNode->next = ptr;
}

struct node *delete (struct node *head)
{
  struct node *ptr = head;
  head = head->next;
  free(ptr);

  return head;
}

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

  printf("after insertion:\n\n");

  head = insert(head, 10000);

  display(head);

  printf("after deletion:\n\n");

  head = delete (head);

  display(head);

  printf("after insertion:\n\n");

  insert_after_a_node(two, 2222);
  display(head);

  return 0;
}