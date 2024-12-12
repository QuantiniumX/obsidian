#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
    int size;
} Deque;

void initDeque(Deque *d) {
    d->front = -1;
    d->rear = -1;
    d->size = 0;
}

bool isEmpty(Deque *d) { return d->size == 0; }

bool isFull(Deque *d) { return d->size == MAX_SIZE; }

void insertFront(Deque *d, int data) {
    if (isFull(d)) {
        printf("Deque overflow\n");
        return;
    }

    if (isEmpty(d)) {
        d->front = 0;
        d->rear = 0;
    } else if (d->front == 0) {
        d->front = MAX_SIZE - 1;
    } else {
        d->front--;
    }
    d->items[d->front] = data;
    d->size++;
}

void insertRear(Deque *d, int data) {
    if (isFull(d)) {
        printf("Deque overflow\n");
        return;
    }

    if (isEmpty(d)) {
        d->front = 0;
        d->rear = 0;
    } else if (d->rear == MAX_SIZE - 1) {
        d->rear = 0;
    } else {
        d->rear++;
    }
    d->items[d->rear] = data;
    d->size++;
}

int deleteRear(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque Underflow! Cannot delete from rear\n");
        return -1;
    }

    int item = deque->items[deque->rear];

    if (deque->size == 1) {
        initDeque(deque);
    } else if (deque->rear == 0) {
        deque->rear = MAX_SIZE - 1;
    } else {
        deque->rear--;
    }

    deque->size--;
    return item;
}

int deleteFront(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque Underflow! Cannot delete from front\n");
        return -1;
    }

    int item = deque->items[deque->front];

    if (deque->size == 1) {
        initDeque(deque);
    } else if (deque->front == MAX_SIZE - 1) {
        deque->front = 0;
    } else {
        deque->front++;
    }

    deque->size--;
    return item;
}

int getFront(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1;
    }
    return deque->items[deque->front];
}

int getRear(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return -1;
    }
    return deque->items[deque->rear];
}

void printDeque(Deque *deque) {
    if (isEmpty(deque)) {
        printf("Deque is empty\n");
        return;
    }

    printf("Deque elements: ");
    int count = 0;
    int index = deque->front;

    while (count < deque->size) {
        printf("%d ", deque->items[index]);
        index = (index + 1) % MAX_SIZE;
        count++;
    }
    printf("\n");
}

int main() {
    Deque deque;

    initDeque(&deque);

    printf("Inserting elements:\n");

    insertFront(&deque, 10);
    insertFront(&deque, 20);

    insertRear(&deque, 30);
    insertRear(&deque, 40);

    printDeque(&deque);

    printf("Front element: %d\n", getFront(&deque));
    printf("Rear element: %d\n", getRear(&deque));

    printf("Deleting from front: %d\n", deleteFront(&deque));
    printf("Deleting from rear: %d\n", deleteRear(&deque));

    printDeque(&deque);

    return 0;
}
