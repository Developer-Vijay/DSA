#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    /* data */
};

void linkListTraversal(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *insertAtBegining(int data, struct node *head)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    return head;
}

struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;

    int i = 0;
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    newNode->data = data;
    newNode->next = ptr->next;
    ptr->next = newNode;
    return head;
}

struct node *insertAtEnd(struct node *head, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = head;
    newNode->data = data;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->next = NULL;
    return head;
}

struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    newNode->next = prevNode->next;
    prevNode->next = newNode;
    return head;
}
int main()
{

    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 7;
    fourth->next = NULL;

    printf("link list creation\n");
    linkListTraversal(head);

    printf("insertion at first\n");
    head = insertAtBegining(3, head);
    linkListTraversal(head);

    printf("insertion at between\n");
    head = insertAtIndex(head, 9, 3);
    linkListTraversal(head);

    printf("insertion at End\n");
    head = insertAtEnd(head, 11);
    linkListTraversal(head);

    printf("insertion after a node\n");
    head = insertAfterNode(head, third, 99);
    linkListTraversal(head);
}