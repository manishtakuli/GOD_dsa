#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *head)
{ // temp is the duplicate temporary pointer , used for storing head value.
    struct Node *temp = head;
    while ((temp->next != head))
    {
        printf("Element : %d\n", temp->data);
        temp = temp->next;
    }
    printf("Element : %d\n", temp->data); // prints the last node data as well.
}
struct Node *insertionbetween(struct Node *head, int data, int index)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));

    struct Node *temp = head;
    int i = 0;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }

    newnode->next = temp->next;
    temp->next = newnode;
    newnode->data = data;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // allocate meomory for nodes in linked list,allocated in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // link head and second node
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 8;
    second->next = third;

    // terminate list
    third->data = 10;
    third->next = head;

    head = insertionbetween(head, 11, 2);
    traversal(head);
    return 0;
}