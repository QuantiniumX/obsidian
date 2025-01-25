#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;               // Data stored in the node
    struct Node* next;      // Pointer to the next node
} Node;

// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the list
void insertAtBeginning(Node** head, int value) {
    Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int value) {
    Node* newNode = createNode(value);
    
    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    // Traverse to the last node
    Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    
    // Attach the new node at the end
    current->next = newNode;
}

// Function to delete a node with a specific value
void deleteNode(Node** head, int value) {
    // If list is empty
    if (*head == NULL) return;
    
    // If head node itself holds the value to be deleted
    if ((*head)->data == value) {
        Node* temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }
    
    // Search for the node to be deleted
    Node* current = *head;
    Node* prev = NULL;
    
    while (current != NULL && current->data != value) {
        prev = current;
        current = current->next;
    }
    
    // If value was not present
    if (current == NULL) return;
    
    // Unlink the node
    prev->next = current->next;
    free(current);
}

// Function to print the linked list
void printList(Node* head) {
    printf("Linked List: ");
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to free the entire list
void freeList(Node* head) {
    Node* current = head;
    Node* next;
    
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
}

// Example usage
int main() {
    Node* head = NULL;
    
    // Inserting elements
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    printList(head);
    
    // Deleting an element
    deleteNode(&head, 20);
    printList(head);
    
    // Clean up
    freeList(head);
    
    return 0;
}
