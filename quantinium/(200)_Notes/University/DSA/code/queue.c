#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 10
typedef struct {
    int item[MAX_SIZE];
    int front;
    int rear;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

bool isEmpty(Queue *q) { return q->front == -1 || q->front > q->rear; }

bool isFull(Queue *q) { return q->rear == MAX_SIZE - 1; }

void enqueue(Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear++;
    q->item[q->rear] = data;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow");
        return -1;
    }

    int item = q->item[q->front];
    q->front++;

    if (q->front > q->rear) {
        initQueue(q);
    }

    return item;
}

int front(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->item[q->front];
}

void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue items: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->item[i]);
    }
    printf("\n");
}

int main() {
    Queue queue;

    initQueue(&queue);

    printf("Enqueuing elements:\n");
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printQueue(&queue);

    printf("Front element: %d\n", front(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));

    printQueue(&queue);

    printf("Is queue empty? %s\n", isEmpty(&queue) ? "Yes" : "No");

    return 0;
}
