#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("element :%d\n",ptr->data);
    ptr=ptr->next;
    }  
}
struct Node* deleteFirst(struct Node * head){
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

int main()
{
    // intialization of nodes 
    int choice;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    //dynamic memory allocation in heap memory...
    head=(struct Node*) malloc (sizeof(struct Node));
    second=(struct Node*) malloc (sizeof(struct Node));
    third=(struct Node*) malloc (sizeof(struct Node));
    four=(struct Node*) malloc (sizeof(struct Node));

    head->data=7;
    head->next=second;

    second->data=9;
    second->next=third;

    third->data=10;
    third->next=four;

    four->data=12;
    four->next=NULL;

    LinkedListTraversal(head);
    // head=deleteFirst(head);
    // printf("delete after first element\n";)
    // LinkedListTraversal(head);
}