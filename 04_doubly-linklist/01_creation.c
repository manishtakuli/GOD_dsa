#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traversal(struct Node *head)
{
    struct Node *ptr = head; 
    while (ptr != NULL)   //temp != NULL            process every node until you run out of nodes.
                          // temp->next != NULL     check whether the current node has a next node.
    {

        printf("element :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->next = first;
    head->data = 10;
    head->prev = NULL;
 
    first->next = second;
    first->data = 110;
    first->prev = head;

    second->next = NULL;
    second->data = 1110;
    second->prev = first;

    traversal(head);
}
