#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist(struct Node *ptr)
{
    printf("\n list of element\n:");
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int ISEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
struct Node *push(struct Node *top, int x)
{
    if (!IsFull)
    {
        printf("stack overflow\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
    int peek(int pos)
    {
        struct Node *ptr = top;
        for (int i = 0; (i<pos-1 && ptr!=NULL); i++)
        {
            ptr = ptr->next;
        }
        if (ptr!=NULL)
        {
            return ptr->data;
        }
        else{
            return -1;
        }
        
        
    }
int main()
{
    struct Node *top = NULL;
    top = push(top, 55);
    top = push(top, 52);
    top = push(top, 5);
    top = push(top, 15);
    top = push(top, 2);
    linkedlist(top);
    for (int i = 1; i <=5; i++)
    {
        printf("value at peek %d is: %d\n", i, peek(i));
    }
    
    return 0;
}