> A **stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle, where the last element added to the structure is the first one to be removed. It operates on the principle of two main operations: push, which adds an element to the top of the stack, and pop, which removes the top element from the stack.

The basic concept can be illustrated by thinking of your data set as a **stack of plates or books** where you can only take the top item of the stack in order to remove things from it.

![[stack.png]]

### Implementation
```cpp
class Stack {
private:
    static const int MAX_SIZE = 100; // Maximum size of the stack
    int data[MAX_SIZE]; // Array to store stack elements
    int top; // Index of the top element

public:
    // Constructor
    Stack() {
        top = -1; // Initialize top to -1 (empty stack)
    }

    // Push operation to add an element to the top of the stack
    void push(int value) {
        if (top == MAX_SIZE - 1) {
            // Stack is full
            cout << "Stack Overflow" << endl;
        } else {
            // Increment top and add the value to the top of the stack
            top++;
            data[top] = value;
        }
    }

    // Pop operation to remove and return the top element from the stack
    int pop() {
        if (top == -1) {
            // Stack is empty
            cout << "Stack Underflow" << endl;
            return -1; // Or throw an exception
        } else {
            // Return the top element and decrement top
            int value = data[top];
            top--;
            return value;
        }
    }

    // Peek operation to return the top element of the stack without removing it
    int peek() {
        if (top == -1) {
            // Stack is empty
            cout << "Stack is empty" << endl;
            return -1; // Or throw an exception
        } else {
            // Return the top element
            return data[top];
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() {
        return top == MAX_SIZE - 1;
    }
};

```