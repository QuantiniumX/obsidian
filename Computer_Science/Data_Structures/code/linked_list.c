#include <stdio.h>
#include <stdlib.h>

typedef struct {
    void *next;
    int data;
} Node;

void printMenu();
void printList();
Node *addNode(int data);
int removeNode(int target);
Node *insertNode(int data, int position);

Node *head = NULL;

int main(void) {
    int option = -1;
    int num = 0, pos = 0;
    while (option != 5) {
        printMenu();
        int num_received = scanf("%d", &option);
        if (num_received == 1 && option > 0 && option <= 5) {
            switch (option) {
                case 1:
                    printf("Add the data you wanna add to the linked list: ");
                    scanf("%d", &num);
                    addNode(num);
                    break;
                case 2:
                    printf("Add the data you wanna remove from the linked list: ");
                    scanf("%d", &num);
                    if (!removeNode(num)) {
                        printf("Element not found.\n");
                    }
                    break;
                case 3:
                    printf("Which data you wanna add the node to the linked list: ");
                    scanf("%d", &num);
                    printf("What position you wanna add the node to the linked list: ");
                    scanf("%d", &pos);
                    if (insertNode(num, pos) == NULL) {
                        printf("Failed to insert into list.\n");
                    }
                    break;
                case 4:
                    printList();
                    break;
                case 5:
                    break;
            }
        }
    }
}

//prints the linked list
void printList() {
    Node *current = head;
    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("\n");
}

//print Menu for different choices 
void printMenu() {
    printf("You have 4 options: \n");
    printf("\t1. Add a node to a list\n");
    printf("\t2. Remove a node from the list\n");
    printf("\t3. Insert a node to the list\n");
    printf("\t4. Print the list.\n");
    printf("\t5. Quit.\n");
}

//add a node
Node *addNode(int data) {
    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return NULL;

    new_node->data = data;
    new_node->next = head;
    head = new_node;
    return new_node;
}

//remove a node 
int removeNode(int target) {
    Node *current = head;
    Node *prev = NULL;

    while (current != NULL) {
        if (current->data == target) {
            if (prev == NULL) {
                head = current->next;
            } else {
                prev->next = current->next;
            }
            free(current);
            return 1;
        }
        prev = current;
        current = current->next;
    }
    return 0;
}

//insert a node
Node *insertNode(int data, int position) {
    if (position < 0) {
        printf("Invalid position.\n");
        return NULL;
    }

    Node *current = head;
    Node *prev = NULL;

    while (current != NULL && position > 0) {
        prev = current;
        current = current->next;
        position--;
    }

    if (position > 0) {
        printf("Requested position too far into the list.\n");
        return NULL;
    }

    Node *new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return NULL;

    new_node->data = data;
    if (prev == NULL) {
        new_node->next = head;
        head = new_node;
    } else {
        new_node->next = current;
        prev->next = new_node;
    }

    return new_node;
}
