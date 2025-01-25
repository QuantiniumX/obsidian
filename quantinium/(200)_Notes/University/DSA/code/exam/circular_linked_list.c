#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insertEnd(Node **head, int data) {
    Node *newnode = createNode(data);
    if (*head == NULL) {
        *head = newnode;
        newnode->next = *head;
    } else {
        Node *curr = *head;
        while (curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = newnode;
        newnode->next = *head;
    }
}

void deleteNode(Node **head, int key) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    Node *curr = *head;
    Node *prev = NULL;

    while (curr->data != key) {
        if (curr->next == *head) {
            printf("Node with key %d not found.\n", key);
            return;
        }
        prev = curr;
        curr = curr->next;
    }

    if (curr->next == *head && prev == NULL) {
        *head = NULL;
        free(curr);
        printf("Deleted node with key %d. List is now empty.\n", key);
        return;
    }

    if (curr == *head) {
        prev = *head;
        while (prev->next != *head) {
            prev = prev->next;
        }
        *head = curr->next;
        prev->next = *head;
    } else if(curr->next == *head) {
        prev->next = *head;
    } else {
        prev->next = curr->next;
    }

    free(curr);
    printf("Deleted node with key %d.\n", key);
}

void display(Node **head) {
    if (*head == NULL) {
        printf("list is empty\n");
        return;
    }

    Node *temp = *head;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != *head);
    printf("head");
}
