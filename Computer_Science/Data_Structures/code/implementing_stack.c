#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int arr[MAX_SIZE];
    int top;
} Stack;

void init_stack(Stack* stack) {
    stack->top = -1; 
}

bool isEmpty(Stack* stack) {
    return stack->top == -1;
}

bool isFull(Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

void push_back(Stack* stack, int value) {
    if(isFull(stack)) {
        printf("Stack overflow! Value cant be stored further\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(Stack* stack) {
    if(isEmpty(stack)) {
        printf("Stack Underflow! Can't pop an element further as the stack is empty\n");
        exit(EXIT_FAILURE);
    }
    return stack->arr[stack->top--];
}

int peek(Stack* stack) {
    if(isEmpty(stack)) {
        printf("There is no element in stack as it is empty");
        exit(EXIT_FAILURE);
    }
    return stack->arr[stack->top];
}

int main() {
    Stack stack;
    init_stack(&stack);

    push_back(&stack, 15);
    push_back(&stack, 34);
    push_back(&stack, 23);
    push_back(&stack, 54);
    push_back(&stack, 51);
    push_back(&stack, 88);
    push_back(&stack, 56);
    push_back(&stack, 37);
    push_back(&stack, 73);
    push_back(&stack, 834);
    push_back(&stack, 64);

    printf("Printing the stack\n");
    for(int i = 0; i <= stack.top; i++) {
       printf("%d\n", stack.arr[i]); 
    }

    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));
    printf("Popping: %d\n", pop(&stack));

    printf("Printing the stack after popping \n");
    for(int i = 0; i <= stack.top; i++) {
       printf("%d\n", stack.arr[i]); 
    }

    printf("Peeking: %d\n", peek(&stack));

}
