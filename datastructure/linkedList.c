#include <stdio.h>
#include <stdlib.h>
// struct Node{
//     int data;
//     struct Node *next;
// };
// void Traversal(struct Node *ptr){
//     while(ptr!=NULL){
//          printf("element:%d \n",ptr->data);
//          ptr=ptr->next;
//     }
   
// }
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *four;

//     head=(struct Node*) malloc (sizeof (struct Node));
//     second=(struct Node*) malloc (sizeof (struct Node));
//     third=(struct Node*) malloc (sizeof (struct Node));
//     four=(struct Node*) malloc (sizeof (struct Node));
//     head->data=7;
//     head->next=second;
//     second->data=20;
//     second->next=third;
//     third->data=24;
//     third->next=four;
//     four->data=50;
//     four->next=NULL;
//     Traversal(head);
//     return 0;
// }
struct yash{
    int data;
    struct yash *next;
};
void Traversal(struct yash *kamesh){
    while(kamesh!=NULL){
        printf("element is :%d \n",kamesh->data);
        kamesh=kamesh->next;
    }
}
#include <stdio.h>
int main()
{
    struct yash *head;
    struct yash *second;
    struct yash *third;


    //memory in heap
    head=(struct yash*) malloc (sizeof(struct yash));
    second=(struct yash*) malloc (sizeof(struct yash));
    third=(struct yash*) malloc (sizeof(struct yash));

    //initialize ...
    head->data=12;
    head->next=second;
    second->data=24;
    second->next=third;
    third->data=36;
    third->next=NULL;
    printf("hello \n");
    Traversal(head);
    return 0;
}