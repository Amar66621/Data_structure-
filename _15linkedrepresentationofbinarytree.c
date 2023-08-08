#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *n;
    n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    printf("the element is %d\n", data);
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    struct Node *p = createNode(1);
    struct Node *p1 = createNode(8);
    struct Node *p2 = createNode(12);
    struct Node *p3 = createNode(12);
    struct Node *p4 = createNode(12);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    return 0;
}