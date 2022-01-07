#include <stdio.h>
#include <stdlib.h>

struct node
{
    /* data */
    int data;

    struct node *next;
};

void linkListTraversal(struct node *ptr)
{

    while (ptr != NULL)
    {
        // here the ptr is pointing towards first node which is head
        /* code */
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    // putting data in head and pointing head to second
    head->data = 4;
    head->next = second;

    // putting data in second and pointing second to third
    second->data = 5;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = fifth;

    fifth->data = 8;
    fifth->next = NULL;

    // traversing the Array and showing all the linked list
    linkListTraversal(head);
}