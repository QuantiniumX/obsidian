#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int front;
    int rear;
} Queue;

void init_queue(Queue* queue) {
    queue->front = -1;
    queue->rear = -1;
}

bool isFull(Queue* queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;;
}

bool isEmpty(Queue* queue) {
    return queue->front == -1;
}

void enqueue(Queue* queue, int value) {
    if(isFull(queue)) {
        printf("Queue Overflow! Value cant be added furthe\n");
        return;
    }
    if(isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->arr[queue->rear] = value;
}

int dequeue(Queue* queue){ 
    if(isEmpty(queue)) {
        printf("Queue Underflow! Value cant be dequeuee further\n");
        exit(EXIT_FAILURE);
    }
    int val = queue->arr[queue->front];
    if(queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return val;

}

int main()  {
    Queue queue;
    init_queue(&queue);

    enqueue(&queue, 15);
    enqueue(&queue, 74);
    enqueue(&queue, 214);
    enqueue(&queue, 36);
    enqueue(&queue, 39);
    enqueue(&queue, 27);
    enqueue(&queue, 39);
    enqueue(&queue, 95);

    printf("Printing the queue\n");
    for(int i = 0; i <= queue.rear; i++) {
        printf("%d\n", queue.arr[i]);
    }

   printf("Dequeuing: %d\n", dequeue(&queue)); 
   printf("Dequeuing: %d\n", dequeue(&queue)); 
   printf("Dequeuing: %d\n", dequeue(&queue)); 
   printf("Dequeuing: %d\n", dequeue(&queue)); 

    printf("After dequeuing printing the queue\n");
    for(int i = 0; i <= queue.rear; i++) {
        printf("%d\n", queue.arr[i]);
    }
}
