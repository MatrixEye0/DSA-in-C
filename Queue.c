#include <stdio.h>

#define MAX_SIZE 100

// Structure for queue
typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Function to initialize the queue
void initialize(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the queue is full
int isFull(Queue *queue) {
    return (queue->rear == MAX_SIZE - 1);
}

// Function to insert an element into the queue
void enqueue(Queue *queue, int element) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    } else if (isEmpty(queue)) {
        queue->front = 0;
    }

    queue->rear++;
    queue->data[queue->rear] = element;
    printf("Enqueued element: %d\n", element);
}

// Function to remove an element from the queue
int dequeue(Queue *queue) {
    int element;

    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return -1;
    } else if (queue->front == queue->rear) {
        element = queue->data[queue->front];
        queue->front = -1;
        queue->rear = -1;
    } else {
        element = queue->data[queue->front];
        queue->front++;
    }

    printf("Dequeued element: %d\n", element);
    return element;
}

// Function to display the elements of the queue
void display(Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Elements of the queue: ");
    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->data[i]);
    }
    printf("\n");
}

int main() {
    Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    display(&queue);

    dequeue(&queue);

    display(&queue);

    return 0;
}
