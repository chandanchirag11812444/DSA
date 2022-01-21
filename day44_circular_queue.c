#include <stdio.h>
#include <stdlib.h>
struct CircularQueue // declaring structure queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct CircularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct CircularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }

    return 0;
}
void enqueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("The queue is Full");
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        printf("the enquied element %d is \n", val);
    }
}
int dequeue(struct CircularQueue *q)
{
    int a = -1;
    if (isEmpty(q))
    {
        printf("the queue is empty\n");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
}

int main()
{
    struct CircularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * (sizeof(int)));
    // enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 11);
    printf("dequeing element %d\n", dequeue(&q));
    printf("dequeing element %d\n", dequeue(&q));
    printf("dequeing element %d\n", dequeue(&q));
    
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
    if (isEmpty(&q))
    {
        printf("Queue is empty\n");
    }
    if (isFull(&q))
    {
        printf("Queue is full\n");
    }
    return 0;
}