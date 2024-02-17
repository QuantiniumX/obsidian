> A **queue** is a linear data structure that follows the **First In, First Out (FIFO)** principle, where the first element added to the structure is the first one to be removed. It operates on the principle of two main operations: enqueue, which adds an element to the back of the queue, and dequeue, which removes the front element from the queue.

![[Queue-Data-Structures.png]]

```cpp
```cpp
class Queue {
private:
    static const int MAX_SIZE = 100; // Maximum size of the queue
    int data[MAX_SIZE]; // Array to store queue elements
    int front, rear; // Index of the front and rear elements

public:
    // Constructor
    Queue() {
        front = rear = -1; // Initialize front and rear to -1 (empty queue)
    }

    // Enqueue operation to add an element to the back of the queue
    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            // Queue is full
            cout << "Queue Overflow" << endl;
        } else {
            if (front == -1)
                front = 0;
            // Increment rear and add the value to the rear of the queue
            rear++;
            data[rear] = value;
        }
    }

    // Dequeue operation to remove and return the front element from the queue
    int dequeue() {
        if (front == -1 || front > rear) {
            // Queue is empty
            cout << "Queue Underflow" << endl;
            return -1; // Or throw an exception
        } else {
            // Return the front element and increment front
            int value = data[front];
            front++;
            return value;
        }
    }

    // Peek operation to return the front element of the queue without removing it
    int peek() {
        if (front == -1 || front > rear) {
            // Queue is empty
            cout << "Queue is empty" << endl;
            return -1; // Or throw an exception
        } else {
            // Return the front element
            return data[front];
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == -1 || front > rear;
    }

    // Check if the queue is full
    bool isFull() {
        return rear == MAX_SIZE - 1;
    }
};
```