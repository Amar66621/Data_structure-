#include<stdio.h>
#include<stdlib.h>

struct Queue{
    int size;
    int f;
    int r;
    int * arr;
};
int isFull(struct Queue* q){
    if (q->r==q->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int isEmpty(struct Queue *q){
    if (q->r==q->f)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void Enqueue(struct Queue* q, int val)
{
    if (isFull(q))
    {
        printf("queue overflow");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct Queue *q)
{
    int a =-1;
    if (isEmpty(q))
    {
        printf("queue underflow");
    }
    else{
        q->f++;
        a =q->arr[q->f];
    }
    return a;
    
}
 
int main(){
    struct Queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    Enqueue(&q, 12);
    Enqueue(&q, 15);
    Enqueue(&q, 1);
    Enqueue(&q, 5);
    printf("The dequeue element is %d\n", dequeue(&q));
    printf("The dequeue element is %d\n", dequeue(&q));

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