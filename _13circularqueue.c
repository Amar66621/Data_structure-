#include <stdio.h>
#include <stdlib.h>

struct circularqueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularqueue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct circularqueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct circularqueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is overflow\n");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("Enqueued element is :%d\n", val);
    }
}
int dequeue(struct circularqueue *q)
{
    int val = -1;
    if (isEmpty(q))
    {
        printf("queue is underflow\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        val = q->arr[q->f];
    }
    return val;
}
int main()
{
    struct circularqueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);
    printf("The dequeue element is %d\n", dequeue(&q));
    printf("The dequeue element is %d\n", dequeue(&q));
    printf("The dequeue element is %d\n", dequeue(&q));
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
    if (isEmpty(&q))
    {
        printf("Queue is empty");
    }
    if (isFull(&q))
    {
        printf("Queue is full");
    }

    return 0;
}