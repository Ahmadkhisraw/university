#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void initializeQueue(struct Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(struct Queue* queue) {
    return queue->front == -1;
}

int isFull(struct Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(struct Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
    } else {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = value;
        printf("Enqueued element: %d\n", value);
    }
}

int dequeue(struct Queue* queue) {
    int value = -1;
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
    } else {
        value = queue->items[queue->front];
        if (queue->front == queue->rear) {
            initializeQueue(queue);
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        printf("Dequeued element: %d\n", value);
    }
    return value;
}

void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue content:");
        int i = queue->front;
        while (1) {
            printf(" %d", queue->items[i]);
            if (i == queue->rear) {
                break;
            }
            i = (i + 1) % MAX_SIZE;
        }
        printf("\n");
    }
}

int main() {
    struct Queue myQueue;
    initializeQueue(&myQueue);

    enqueue(&myQueue, 1);
    enqueue(&myQueue, 2);
    enqueue(&myQueue, 3);

    display(&myQueue);

    dequeue(&myQueue);
    dequeue(&myQueue);

    display(&myQueue);

    enqueue(&myQueue, 4);
    enqueue(&myQueue, 5);

    display(&myQueue);

    return 0;
}
