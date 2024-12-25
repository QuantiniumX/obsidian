#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *createNode(int data) {
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = data;
    newnode->right = NULL;
    newnode->left = NULL;
    return newnode;
}

int size(Node *root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + size(root->left) + size(root->right);
}

Node *insert(Node *root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

Node *search(Node *root, int target) {
    if (root == NULL || root->data == target) {
        return root;
    }

    if (target < root->data) {
        return search(root->left, target);
    }
    return search(root->right, target);
}

void inorder_traversal(Node *root) {
    if (root != NULL) {
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

void preorder_traversal(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(Node *root) {
    if (root != NULL) {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ", root->data);
    }
}

int height(Node *root) {
    if (root == NULL) {
        return 0;
    }

    int rDepth = height(root->right);
    int lDepth = height(root->left);

    if (rDepth > lDepth) {
        return rDepth + 1;
    }
    return lDepth + 1;
}

int main() {
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal: ");
    inorder_traversal(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder_traversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder_traversal(root);
    printf("\n");

    printf("size of tree: %d\n", size(root));
    printf("height of tree: %d\n", height(root));
}
