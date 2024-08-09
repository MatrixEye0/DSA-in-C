#include <stdio.h>
#define SIZE 5

struct PriorityQueue {
    int queue[SIZE];
    int front;
    int rear;
};

int isFull(struct PriorityQueue* pq) {
    if (pq->rear == SIZE - 1)
        return 1;
    else
        return 0;
}

int isEmpty(struct PriorityQueue* pq) {
    if (pq->front == -1)
        return 1;
    else
        return 0;
}

void enqueue(struct PriorityQueue* pq, int item) {
    if (isFull(pq))
        printf("Queue is full. Cannot enqueue element.\n");
    else {
        int i, j;
        i = pq->rear;
        while (i >= 0 && pq->queue[i] > item) {
            pq->queue[i + 1] = pq->queue[i];
            i--;
        }
        pq->queue[i + 1] = item;
        pq->rear++;
        if (pq->front == -1)
            pq->front = 0;
        printf("Enqueued element: %d\n", item);
    }
}

int dequeue(struct PriorityQueue* pq) {
    int item;
    if (isEmpty(pq)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else {
        item = pq->queue[pq->front];
        if (pq->front == pq->rear) {
            pq->front = -1;
            pq->rear = -1;
        } else
            pq->front++;
        printf("Dequeued element: %d\n", item);
        return item;
    }
}

void display(struct PriorityQueue* pq) {
    int i;
    if (isEmpty(pq))
        printf("Queue is empty.\n");
    else {
        printf("Queue elements: ");
        for (i = pq->front; i <= pq->rear; i++)
            printf("%d ", pq->queue[i]);
        printf("\n");
    }
}

int main() {
    struct PriorityQueue pq;
    pq.front = -1;
    pq.rear = -1;

    enqueue(&pq, 30);
    enqueue(&pq, 10);
    enqueue(&pq, 50);
    enqueue(&pq, 20);
    enqueue(&pq, 40);

    display(&pq);

    dequeue(&pq);
    dequeue(&pq);

    display(&pq);

    enqueue(&pq, 60);
    enqueue(&pq, 70);

    display(&pq);

    return 0;
}
