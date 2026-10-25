#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void deletebetween(struct Node *head, int index)
{
    struct Node *ptr = head;
    int i = 0;
    while (i < index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    struct Node *temp = ptr->next;
    ptr->next = temp->next;
    free(temp);
}

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = first;
    head->data = 30;
    head->next = second;
    head->data = 40;
    head->next = NULL;

    deletebetween(head, 2);
    return 0;
}