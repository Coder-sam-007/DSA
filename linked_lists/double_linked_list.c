#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
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
    struct node *one = malloc(sizeof(struct node));
    struct node *two = malloc(sizeof(struct node));
    struct node *three = malloc(sizeof(struct node));
    struct node *four = malloc(sizeof(struct node));
    struct node *tail;

    one->data = 12;
    two->data = 12;
    three->data = 12;
    four->data = 12;
    tail = four;

    head = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = tail;

    four->prev = three;
    three->prev = two;
    two->prev = three;
    one->prev = NULL;

        return 0;
}