#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *createNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void append(Node **head, int data) {
    Node *newnode = createNode(data);
    if (newnode == NULL)
        return;

    if (*head == NULL) {
        *head = newnode;
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void prepend(Node **head, int data) {
    Node *newnode = createNode(data);
    if (newnode == NULL)
        return;

    newnode->next = *head;
    if (*head != NULL) {
        (*head)->prev = newnode;
    }

    *head = newnode;
}

void deleteNode(Node **head, int data) {
    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *temp = *head;
    while (temp != NULL && temp->data != data) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with value %d not found\n", data);
        return;
    }

    if (temp == *head) {
        *head = temp->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
    } else {
        if (temp->prev != NULL) {
            temp->prev->next = temp->next;
        }
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
    }

    free(temp);
}

void displayForward(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayReverse(Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);

    prepend(&head, 5);

    printf("List in forward direction: ");
    displayForward(head);

    printf("List in reverse direction: ");
    displayReverse(head);

    deleteNode(&head, 20);

    printf("List after deleting 20: ");
    displayForward(head);
    return 0;
}
