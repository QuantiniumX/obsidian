#include <stdbool.h>
#include <stdio.h>

#define MAX_SIZE 10

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *stack) { stack->top = -1; }

bool isEmpty(Stack *stack) { return stack->top == -1; }

bool isFull(Stack *stack) { return stack->top == MAX_SIZE - 1; }

void push(Stack *stack, int data) {
    if (isFull(stack)) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++(stack->top)] = data;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty");
        return -1;
    }

    return stack->items[stack->top];
}

void printStack(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    Stack stack;
    initStack(&stack);
    
    printf("Pushing elements to the stack:\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    
    printStack(&stack);

    printf("Top element: %d\n", peek(&stack));

    printf("Popped element: %d\n", pop(&stack));

    printStack(&stack);

    printf("Is stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");
}
