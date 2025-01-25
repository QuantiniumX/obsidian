#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Stack {
    Node *head;
} Stack;

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

void initStack(Stack *s) {
    s->head = NULL;
}

int isEmpty(Stack *s) {
    return s->head == NULL;
}

void push(Stack *s, int data) {
    Node *newnode = createNode(data);
    if (newnode == NULL) return;
    newnode->next = s->head;
    s->head = newnode;
}

void pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return;
    }
    Node *temp = s->head;
    s->head = s->head->next;
    free(temp);
}

int peek(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->head->data;
}

int main() {
    Stack s;

    initStack(&s);

    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    push(&s, 4);

    printf("Top element: %d\n", peek(&s));

    pop(&s);
    pop(&s);

    printf("Top element: %d\n", peek(&s));
    return 0;
}
