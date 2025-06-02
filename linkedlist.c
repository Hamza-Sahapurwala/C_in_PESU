#include<stdio.h>
#include<stdlib.h>

typedef struct {
    int data;
    struct Node *nextnode;
}Node;

// void Node *createnode(int data){

//     Node newnode = (Node*) malloc(sizeof()); 

// }

void insertatbeginning(Node **h, int data){

    if (*h == NULL){

        Node newnode = createnode(data);
        *h = newnode;

    }

    newnode->next = head;
    *head = newnode;

}

void insertatend(Node **h, int data){

    Node *t=h;
    while(*t->nextnode!=NULL){

        *t=*t->next;

    }
    Node newnode = createnode(data);
    *t->nextnode = newnode;

}

int main(){

    // Node n1;  // * First node for the linked list

    // * Linked list has an pointer that points to the first node

    Node *start = (struct Node*) malloc(sizeof(Node)); 
    printf("The node has been created!\n");
    start->data = 100;
    start->nextnode = (Node*) malloc(sizeof(Node));
    
    start->nextnode->data = 200;
    start->nextnode->nextnode = NULL;

    while(start!=NULL){
        printf("Data=%d\n", start->data);
        start = start->nextnode;
    }
}