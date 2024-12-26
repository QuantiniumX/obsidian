#include <stdio.h>

#define MAX_SIZE 4

typedef struct queue {
    int arr[MAX_SIZE];
    int front;
    int rear;
    int size;
} queue;

void initQueue(queue *q) {
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

int isFull(queue *q) { return q->size == MAX_SIZE; }

int isEmpty(queue *q) { return q->size == 0; }

void enqueue(queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full!\n");
        return;
    }

    q->rear = (q->rear + 1) % MAX_SIZE;
    q->arr[q->rear] = data;
    q->size++;
}

int dequeue(queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow!\n");
        return -1;
    }

    int data = q->arr[q->front];
    q->front = (q->front + 1) % MAX_SIZE;
    q->size--;

    return data;
}

int front(queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return q->arr[q->front];
}

void display(queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }

    int i = q->front;
    for (int count = 0; count < q->size; count++) {
        printf("%d ", q->arr[i]);
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main() {
    queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(&q);

    printf("Dequeued element: %d\n", dequeue(&q));
    display(&q);

    printf("Front element: %d\n", front(&q));

    enqueue(&q, 60);
    enqueue(&q, 70);

    display(&q);
    return 0;
}

/*
 * Why are they better than queue
 * 1. Efficient Space Utilization - in normal queue the first index become
 * useless
 * 2. Prevents Overflow in Circular Queue
 * 3. Constant Time Operations
 * 4. Continuous Data Flow - queue can have problem with cont data flow
 * 5. No Need for Shifting Elements
 * 6. Ideal for fixed size buffer
 */

/*
* Advantages
* 1. Efficient Space Utilization
* 2. Fixed Size
* 3. Prevents Overflow
* 4. Constant Time Operations
* 5. Suitable for Buffering
*/

/*
* 1. Fixed Size
* 2. Difficulty with Dynamic Expansion
* 3. Wraparound Handling
*/
