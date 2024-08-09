#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

int isFull() {
    if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1)))
        return 1;
    else
        return 0;
}

int isEmpty() {
    if (front == -1)
        return 1;
    else
        return 0;
}

void enqueue(int item) {
    if (isFull())
        printf("Queue is full. Cannot enqueue element.\n");
    else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        queue[rear] = item;
        printf("Enqueued element: %d\n", item);
    }
}

int dequeue() {
    int item;
    if (isEmpty()) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else {
        item = queue[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else
            front = (front + 1) % SIZE;
        printf("Dequeued element: %d\n", item);
        return item;
    }
}

void display()
{
    int i;
    if (isEmpty())
        printf("Queue is empty.\n");
    else
    {
        printf("Queue elements: ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
            printf("%d ", queue[i]);
        printf("%d\n", queue[i]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();
    dequeue();

    display();

    enqueue(60);
    enqueue(70);

    display();

    return 0;
}
