#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist(struct Node *ptr)
{
    printf("\n list of element:");
    while (ptr!=NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
//insert the element at the beginning of the linked list.
struct Node * insertatbeginning(struct Node *head, int data){
     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
     ptr->next = head;
     ptr->data = data;
     return ptr;

}
//insert the element in between the element of the linked list using create a new node and insert at that index where you want.
struct Node * insertatindex(struct Node *head, int data, int index){
     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
   int i=0;
    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//this function goes to insert the elemnet in the end of the linke list which is called the insert at end. 
struct Node * insertatend(struct Node *head, int data){
     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    ptr->data = data;
    while (p->next!=NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 55;
    third->next = NULL;
     printf("before insertion in the linked list");
    linkedlist(head);
   
    //head = insertatbeginning(head, 42);
    //head = insertatindex(head, 42, 2);
    head = insertatend(head, 42);
     printf("\nafter insertion in the linked list");
    linkedlist(head);
   
    return 0;
}