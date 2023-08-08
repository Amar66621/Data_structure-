#include <stdio.h>
int stack[100], choice = 0, i, j, n, top = -1;
void push();
void pop();
void show();
void exit();
void main()
{
    printf("enter the number of element in the stack.");
    scanf("%d", &n);
    printf("\n---------\n");
    while (choice != 4)
    {
        printf("choose one from the given choice\n");
        printf("\n1.push\n2.pop\n3.show\n4.exiting");
        printf("\nenter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            show();
            break;
        }
        case 4:
        {
            exit();
            break;
        }
        default:
        {
            printf("enter the valid choice");
        }
        }
    }
}
void push()
{
    int val;
    if (top == n)
        printf("\noverflow");
    else
    {
        printf("enter the value");
        scanf("%d", &val);
        top = top + 1;
        stack[top] = val;
    }
}
void pop()
{
    if (top == -1)
        printf("\nunderflow");
    else
        top = top - 1;
}
void show()
{
    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    if (top == -1)
    {
        printf("the stack is empty");
    }
}