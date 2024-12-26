#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Queue {
    Node *front, *rear;
} Queue;

Node *createNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Couldn't allocate memory for node\n");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void initQueue(Queue *q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(Queue *q) { return q->front == NULL && q->rear == NULL; }

void enqueue(Queue *q, int data) {
    Node *newnode = createNode(data);
    if (newnode == NULL)
        return;

    if (q->rear == NULL) {
        q->front = q->rear = newnode;
    } else {
        q->rear->next = newnode;
        q->rear = newnode;
    }
}

void deque(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return;
    }

    Node *temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
}

int front(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }

    return q->front->data;
}

int rear(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->rear->data;
}

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);
    enqueue(&q, 4);
    enqueue(&q, 5);

    printf("Front: %d\n", front(&q));
    printf("Rear: %d\n", rear(&q));

    deque(&q);
    deque(&q);
    deque(&q);
    printf("Front: %d\n", front(&q));
    printf("Rear: %d\n", rear(&q));
}
