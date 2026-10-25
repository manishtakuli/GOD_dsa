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
struct Node* deletebetween(struct Node *head, int index)
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
    return head;
}

int main()
{
   
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = first;
    first->data = 30;
    first->next = second;
    second->data = 40;
    second->next = third;
    third->data = 50;
    third->next = NULL;

    head = deletebetween(head, 2);
    traversal(head);
    return 0;
}