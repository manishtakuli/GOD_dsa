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
struct Node* deletebeginning(struct Node* head){
    struct Node* ptr = head;
    while(ptr -> next != head){
       ptr = ptr -> next;
    }
    ptr -> next = head -> next;
    free (head);
    head = ptr ->next ;
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

    head = deletebeginning(head);
    traversal(head);
    return 0;
}