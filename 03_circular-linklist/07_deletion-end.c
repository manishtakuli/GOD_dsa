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
        printf("Element : %d", temp->data);
        temp = temp->next;
    }
    printf(" %d", temp->data); // prints the last node data as well.
}
struct Node* deletionend(struct Node* head ){
    struct Node* temp = head;
    while(temp-> next ->next != head){
       temp = temp-> next;
    }
   struct Node* ptr = temp -> next;
   temp -> next = ptr -> next;
   free(ptr);
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

    head = deletionend(head);
    traversal(head);
    return 0;
}