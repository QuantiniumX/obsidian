#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void append(Node** headRef, int data) {
    Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    Node* lastNode = *headRef;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
    newNode->prev = lastNode;
}

void prepend(Node** headRef, int data) {
    Node* newnode = createNode(data);
    newnode->next = *headRef;
    newnode->prev = NULL;
    if(*headRef != NULL) {
        (*headRef)->prev = newnode;
    }
    *headRef = newnode;
}

void deleteNode(Node** headRef, int key) {
    Node* current = *headRef;
    if(current == NULL) return;
    if(current->data == key) {
        *headRef = current->next;
        if(*headRef != NULL) {
            (*headRef)->prev = NULL;
        }
        free(current);
        return;
    }

    while(current != NULL && current->data != key) {
        current = current->next;
    }
    if(current == NULL) return;
    if(current->prev != NULL) {
        current->prev->next = current->next;
    }
    if(current->next != NULL){
        current->next->prev = current->prev;
    }
    free(current);
}

void display(Node* head) {
    Node* current = head;
    while(current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    display(head);
    prepend(&head, 0);
    display(head);
    deleteNode(&head, 2);
    display(head);

    return 0;
}
