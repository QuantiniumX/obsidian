#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *createNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    if (newnode == NULL) {
        printf("Failed to allocated new node");
        return NULL;
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void insert(Node **head, int data) {
    Node *newnode = createNode(data);
    if (*head == NULL) {
        *head = newnode;
        return;
    }

    Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newnode;
}

void prepend(Node **head, int data) {
    Node *newnode = createNode(data);
    newnode->next = *head;
    *head = newnode;
}

int countNode(Node **head) {
    int count = 0;
    Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
        count++;
    }
    return count;
}

void insert_at_pos(Node **head, int data, int pos) {
    int count = countNode(head);
    if (pos > count || pos < 0) {
        printf("invalid position");
        return;
    }

    if (pos == 0) {
        insert(head, data);
    }

    Node *newnode = createNode(data);
    Node *temp = *head;
    Node *prev = *head;
    int ctr = 0;

    while (ctr < pos) {
        prev = temp;
        temp = temp->next;
        ctr++;
    }
    prev->next = newnode;
    newnode->next = temp;
}

void delete_at_pos(Node **head, int pos) {
    int count = countNode(head);
    if (pos > count || pos < 0) {
        printf("invalid position");
        return;
    }

    if (pos == 0) {
        Node *curr = *head;
        *head = curr->next;
        free(curr);
    }

    int ctr = 0;
    Node *prev = *head;
    Node *curr = *head;
    while (ctr < pos) {
        prev = curr;
        curr = curr->next;
        ctr++;
    }

    prev->next = curr->next;
    free(curr);
}

void delete_at_end(Node **head) {
    if (*head == NULL) {
        printf("List is empty");
        return;
    }

    Node *curr = *head;
    Node *prev = NULL;
    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    free(curr);
}

void delete_at_beginning(Node **head) {
    if (*head == NULL) {
        printf("List is empty");
        return;
    }

    Node *curr = *head;
    *head = curr->next;
    free(curr);
}

void display(Node **head) {
    if (*head == NULL) {
        printf("lInked list is empty\n");
        return;
    }

    Node *curr = *head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL \n");
}

void sort(Node **head) {
    if (*head == NULL) {
        printf("lInked list is empty\n");
        return;
    }

    for (Node *i = *head; i->next != NULL; i = i->next) {
        int swapped = 0;
        for (Node *j = *head; j != NULL && j->next != NULL; j = j->next) {
            if (j->data > j->next->data) {
                int temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
                swapped = 1;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    Node *head = NULL;

    insert(&head, 90);
    insert(&head, 15);
    insert(&head, 17);
    insert(&head, 19);

    display(&head);

    prepend(&head, 11);
    display(&head);

    insert_at_pos(&head, 16, 3);
    display(&head);

    delete_at_beginning(&head);
    display(&head);

    delete_at_end(&head);
    display(&head);

    delete_at_pos(&head, 2);
    display(&head);

    sort(&head);
    display(&head);
}

/*
 * Application
 * 1. Implementation of stack and queue
 * 2. image viewer
 * 3. history graph
 * 4. file system
 * 5. music player
 * 6. GPS
 */
