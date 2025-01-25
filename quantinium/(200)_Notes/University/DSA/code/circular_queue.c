#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 20

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
    q->size = 0;
}

bool isEmpty(Queue *q) { return q->size == 0; }

bool isFull(Queue *q) { return q->size == MAX_SIZE; }

void enqueue(Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }

    if (isEmpty(q)) {
        q->front = 0;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->items[q->rear] = data;
    q->size++;
}

int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow");
        return -1;
    }

    int item = q->items[q->front];
    if (q->size == 1) {
        initQueue(q);
    } else {
        q->front = (q->front + 1) % MAX_SIZE;
        q->size--;
    }
    return item;
}

int front(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    return q->items[q->front];
}

void printQueue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int count = 0;
    int index = q->front;
    while (count < q->size) {
        printf("%d ", q->items[index]);
        index = (index + 1) % MAX_SIZE;
        count++;
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
}
