#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
void traversal (struct Node * temp){ 
    while ((temp != NULL))
    {
        printf("Elment : %d\n",temp->data);
        temp = temp -> next;
    }
}
struct Node* insertend(struct Node*head, int data){
    struct Node * newnode = (struct Node*) malloc(sizeof(struct Node));
    struct Node * temp = head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp -> next = newnode;
    newnode -> next = NULL;
    newnode -> data = data;
    return head;
} 
int main (){
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct Node * first = (struct Node*) malloc(sizeof(struct Node));
    struct Node * second = (struct Node*) malloc(sizeof(struct Node));
    
    head -> data = 24;
    head -> next = first;

    first -> data = 28;
    first -> next = second; 

    second -> data = 30;
    second -> next = NULL;

    head = insertend(head,40);
    traversal(head);
    return 0;


}