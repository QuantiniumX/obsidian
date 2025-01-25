#include <stdio.h>

#define MAX_SIZE 10

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

    q->rear++;
    q->arr[q->rear] = data;
    q->size++;
}

int dequeue(queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow!\n");
        return -1;
    }

    int data = q->arr[q->front];

    for (int i = 0; i < q->size - 1; i++) {
        q->arr[i] = q->arr[i + 1];
    }

    q->rear--;
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

    printf("Queue elements: ");
    for (int i = 0; i < q->size; i++) {
        printf("%d ", q->arr[i]);
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
 * 1. Process Scheduling
 * 2. Data buffers
 * 3. Breadth first search
 * 4. Handling request in data server
 * 5. Simulation systems
 * 6. Message queue
 * 7. Network traffic
 */

/*
* Advantages
* 1. FIFO
* 2. Resource management
* 3. Synchronization - synchronize and transfer data safely between multiple threads or processes
* 4. Decoupling - web servers use request queues to decouple request handling from request generation.
* 5. rate limiting 
* 6. parralelism
*/

/*
* 1. No random access
* 2. extra memory overhead
* 3. increased processing latency
* 4. Not cache friendly
* 5. Bounded capacity
*/
