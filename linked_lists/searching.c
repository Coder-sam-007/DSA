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

int searchNode(struct node **head_ref, int key)
{
  struct node *current = *head_ref;

  while (current != NULL)
  {
    if (current->data == key)
      return 1;
    current = current->next;
  }
  return 0;
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

  int item_to_find;
  printf("Enter element to search: \n");
  scanf("%d", &item_to_find);

  if (searchNode(&head, item_to_find))
  {
    printf("\n%d is found", item_to_find);
  }
  else
  {
    printf("\n%d is not found", item_to_find);
  }

  return 0;
}