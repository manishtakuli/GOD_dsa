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
struct Node* deletebetween(struct Node* head , int index){
    struct Node* ptr = head;
    while(ptr < index -1){
       ptr = ptr -> next;
    }
   struct Node* temp = ptr -> next;
   ptr -> next = temp -> next;
   free(temp);
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

    head = deletebetween(head,1);
    traversal(head);
    return 0;
}