#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node*head){
    struct Node*ptr = head;
    while(ptr != NULL){
        printf("elements:%d\n",ptr->data);
        ptr= ptr-> next;
    }
}
struct Node* deletionend(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    struct Node *temp = ptr->next;
    ptr->next = NULL;
    free(temp);
    return head;
}
int main()
{
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *first = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;
     
    
    head = deletionend(head);
    traversal(head);
    return 0;
}