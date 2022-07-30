#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

void printList(struct node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
}

struct node *deletion_from_begining(struct node *head)
{
  struct node *ptr = head;
  head = head->next;
  free(ptr);
  return head;
}

struct node *deletion_from_end(struct node *head)
{
  struct node *second_last = head;

  while (second_last->next->next != NULL)
    second_last = second_last->next;

  free(second_last->next);
  second_last->next = NULL;

  return head;
}

void deleteNode(struct node **head_ref)
{

  int key;
  printf("\nEnter element you want to delete: ");
  scanf("%d", &key);

  struct node *temp = *head_ref, *prev;

  while (temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }

  prev->next = temp->next;

  free(temp);
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

  head = deletion_from_begining(head);
  printf("\nafter deletion from begining \nthe new linket list is: ");
  printList(head);

  head = deletion_from_end(head);
  printf("\nafter deletion from end \nthe new linket list is: ");
  printList(head);

  deleteNode(&head);
  printList(head);

  return 0;
}
