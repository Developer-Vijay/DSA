#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
    /* data */
};

void traversalFront(struct node *ptr)
{
    struct node *p = ptr;
    while (p != NULL)
    {
        printf("%d->", p->data);
        p = p->next;
    }
    printf("\n");
}

void traversalBack(struct node *ptr)
{
    struct node *p = ptr;
    struct node* d;
    while (p != NULL)
    {
        p=p->next;
        printf("%d->", p->data);
        // p=p->prev;
    }

    printf("\n");
}
int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;
    head->prev = NULL;

    second->data = 5;
    second->next = third;
    second->prev = head;

    third->data = 6;
    third->next = fourth;
    third->prev = second;

    fourth->data = 7;
    fourth->next = NULL;
    fourth->prev = third;

    printf("Traveral Front\n");
    traversalFront(head);

    printf("Traveral back\n");
    traversalBack(head);
}