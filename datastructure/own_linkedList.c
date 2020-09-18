#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

struct Node* insertAtFirst(struct Node *head,int data){
    struct Node *ptr=(struct Node* )malloc (sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node* insertAtEnd(struct Node *head,int data){
    struct Node *ptr=(struct Node* )malloc (sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;
    while(p->next!=NULL){
    	p=p->next;

    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
   
}
struct Node* insertAtIndex(struct Node *head,int data,int index){
     struct Node *ptr=(struct Node* )malloc (sizeof(struct Node));
     struct Node *p=head;
     int i=0;
     while(i!=index-1){
         p=p->next;
         i++;
     }
     ptr->data=data;
     ptr->next=p->next;
     p->next=ptr;
     return head;

}

struct Node* insertAfterNode(struct Node *head,struct Node *prevNode,int data){
	struct Node *ptr=(struct Node* )malloc (sizeof(struct Node));
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
	return head;


}

void LinkedListTraversal(struct Node *ptr){
    while(ptr!=NULL){
    printf("element :%d\n",ptr->data);
    ptr=ptr->next;
    }  
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
    printf("after insert at first\n");
   
    head=insertAtFirst(head,78);
    LinkedListTraversal(head);

    // head=insertAtIndex(head,100,1);	
    // LinkedListTraversal(head);

    // insertAtEnd(head,120);
    // LinkedListTraversal(head);
    	
    // head=insertAfterNode(head,third,45);
    // LinkedListTraversal(head);
    	
    return 0;
}