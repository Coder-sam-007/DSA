#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void insertAtBeginning(struct node **head_ref)
{
  struct node *new_node = malloc(sizeof(struct node));

  int new_data;
  printf("\nEnter new data: ");
  scanf("%d", &new_data);

  new_node->data = new_data;

  new_node->next = *head_ref;

  *head_ref = new_node;
}

void insertAtEnd(struct node **head_ref)
{

  struct node *new_node = malloc(sizeof(struct node));

  int new_data;
  printf("\nEnter new data: ");
  scanf("%d", &new_data);

  new_node->data = new_data;
  new_node->next = NULL;

  struct node *ptr = *head_ref;
  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }

  ptr->next = new_node;
}

void insertAfter(struct node *prev_node, int new_data)
{

  struct node *new_node = malloc(sizeof(struct node));

  new_node->data = new_data;

  new_node->next = prev_node->next;

  prev_node->next = new_node;
}

void printList(struct node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}

int main()
{
  struct node *head = NULL;

  struct node *one = malloc(sizeof(struct node));
  struct node *two = malloc(sizeof(struct node));
  struct node *three = malloc(sizeof(struct node));
  struct node *four = malloc(sizeof(struct node));

  one->data = 12;
  two->data = 22;
  three->data = 32;
  four->data = 42;

  head = one;
  one->next = two;
  two->next = three;
  three->next = four;
  four->next = NULL;

  printf("Linked list: ");
  printList(head);

  insertAfter(one->next, 888);
  printf("\nafter insertion : \n");
  printList(head);

  insertAtBeginning(&head);

  printf("\nafter insertion at the begining: \n");
  printList(head);

  insertAtEnd(&head);
  printf("\nafter insertion at the end: \n");
  printList(head);
}