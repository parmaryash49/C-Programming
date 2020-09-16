#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void Traversal(struct Node *ptr){
    while(ptr!=NULL){
         printf("element:%d \n",ptr->data);
         ptr=ptr->next;
    }
   
}
struct Node * insertAtFirst(struct  Node *head ,int data){
    struct Node *ptr=(struct Node*)malloc (sizeof(struct Node));  
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

    head=(struct Node*) malloc (sizeof (struct Node));
    second=(struct Node*) malloc (sizeof (struct Node));
    third=(struct Node*) malloc (sizeof (struct Node));
    four=(struct Node*) malloc (sizeof (struct Node));
    head->data=7;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=24;
    third->next=four;
    four->data=50;
    four->next=NULL;
    Traversal(head);
    printf("after inserting \n");
    head=insertAtFirst(head,100);
    Traversal(head);
    return 0;
}