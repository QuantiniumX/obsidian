#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

Node* createNode(int data) {
    Node* newnode = malloc(sizeof(Node));
    if(newnode == NULL) {
        printf("Coudn't allocate node");
        exit(EXIT_FAILURE);
    }
    newnode->value = data;
    newnode->next = NULL;
    return newnode;
}

void push_back(Node** node, int data) {
    Node* newnode = createNode(data);
    if(*node == NULL) {
        *node = newnode;
        return;
    }
    
    Node* lastNode = *node;
    while(lastNode->next != NULL) {
        lastNode = lastNode->next;
    }
    lastNode->next = newnode;
}

void pop_node(Node** node, int key) {
    Node* temp = *node;
    Node* prev = NULL;
    while(temp != NULL && temp->value == key) {
        *node = temp->next;
        free(node);
        return;
    }
    while(temp != NULL && temp->value != key) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        printf("key not found");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

Node* Search(Node* head, int key) {
    Node* current = head;
    while(current != NULL) {
        if(current->value == key) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void push_front(Node** head, int data) {
    Node* newnode = createNode(data);
    newnode->next = *head;
    *head = newnode;
}

void display(Node* head) {
    Node* current = head;
    while(current != NULL) {
        printf("%d->", current->value);
        current = current->next;
    }
    printf("NULL\n");
}

void pop(Node** head) {
    while(*head == NULL) {
        printf("List is empty\n");
        return;
    }
    if((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node* secondLast = *head;
    while(secondLast->next->next != NULL) {
        secondLast = secondLast->next;
    }
    free(secondLast->next);
    secondLast->next = NULL;
}

int main(){
    Node* head = NULL; 
    push_back(&head, 10);
    push_back(&head, 20);
    push_back(&head, 30);
    push_back(&head, 40);
    push_back(&head, 50);

    display(head);

    push_front(&head, 0);
    display(head);

    pop_node(&head, 10);
    display(head);

    pop(&head);
    display(head);
    return 0;
}

