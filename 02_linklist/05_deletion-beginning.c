#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void deletebeginning(struct Node *head)
{
    struct Node* ptr = head;
    head = head->next;
    free(ptr);     //removes the memory of 1st node from the heap.
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));

    head->data = 24;
    head->next = first;

    first->data = 28;
    first->next = second;

    second->data = 30;
    second->next = NULL;
     
    deletebeginning(head);
    return 0;
}