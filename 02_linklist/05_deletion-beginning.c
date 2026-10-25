#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal (struct Node * temp){ // temp is the duplicate temporary pointer , used for storing head value.
    while ((temp != NULL))
    {
        printf("Element : %d\n",temp->data);
        temp = temp -> next;
    }
    
}
struct Node* deletebeginning(struct Node *head)
{
    struct Node* ptr = head;
    head = head->next;
    free(ptr);     //removes the memory of 1st node from the heap.
    return head;
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
     
   head = deletebeginning(head);
   traversal(head);
    return 0;
}