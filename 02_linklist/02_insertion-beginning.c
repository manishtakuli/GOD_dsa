#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node * next;
};
struct Node *insertbeginning (struct Node *head, int data){
    struct Node *newnode =(struct Node*) malloc (sizeof(struct  Node));
    newnode -> next =  head;
    newnode -> data = data;
    return newnode;
}
void traversal (struct Node * temp){ 
    while ((temp != NULL))
    {
        printf("Elment : %d\n",temp->data);
        temp = temp -> next;
    }
}
int main () {
    struct Node * head;
    struct Node * second;
    struct Node * third;
    //allocate meomory for nodes in linked list,allocated in heap
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    //link head and second node
    head -> data = 7;
    head -> next = second;

    //link second and third node
    second -> data = 8;
    second -> next = third;

    //terminate list
    third -> data = 10;
    third -> next = NULL;

    
    
    //Insertion
    head = insertbeginning(head,69);
    traversal(head);
}