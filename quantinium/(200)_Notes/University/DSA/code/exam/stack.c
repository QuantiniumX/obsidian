#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 10

typedef struct stack {
    int arr[MAX_SIZE];
    int top;
    int size;
} stack;

void init_stack(stack *s) {
    s->top = -1;
    s->size = 0;
}

bool empty(stack *s) {
    if (s->size == 0) {
        return true;
    }
    return false;
}

bool full(stack *s) {
    if (s->size == MAX_SIZE) {
        return true;
    }
    return false;
}

void push(stack *s, int data) {
    if (full(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->arr[++s->top] = data;
    s->size++;
}

int pop(stack *s) {
    if (empty(s)) {
        printf("Stack underflow\n");
        return INT_MIN;
    }
    int temp = s->arr[s->top];
    s->top--;
    s->size--;
    return temp;
}

void display(stack *s) {
    if (empty(s)) {
        printf("stack is empty");
        return;
    }

    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main() {
    stack s;
    init_stack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    push(&s, 60);

    display(&s);
    printf("Popped element: %d\n", pop(&s));
    display(&s);
}

/*
 * Applications -
 * 1. Undo/Redo
 * 2. Call stack
 * 3. evaluate postfix to infix
 * 4. Function calls
 * 5. Recursion
 * 6. syntax parsing
 * 7. memory management
 */

/*
 * Advantages
 * 1. A Stack helps to manage the data in the ‘Last in First out’ method.
 * 2. Enables Efficient Memory Management
 * 3. Useful for Recursive Functions
 * 4. Simplifies Problem Solving. DFS
 * 5. Constant Time Operations
 */

/*
 * Disadvantages
 * 1. Limited access
 * 2. Fixed size
 * 3. Inefficient searching
 * 4. No random access
 * 5. Not suitable for all algorithms
 * 6. Stack overflow
 */
