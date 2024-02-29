#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

TreeNode *createNode(int data) {
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode *insertNode(TreeNode *root, int data) {
    if (root == NULL) {
        root = createNode(data);
    } else {
        if (data <= root->data) {
            root->left = insertNode(root->left, data);
        } else {
            root->right = insertNode(root->right, data);
        }
    }
    return root;
}

void inorderTraversal(TreeNode *root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d\n", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    TreeNode *root = NULL;
    root = insertNode(root, 13);
    root = insertNode(root, 5);
    root = insertNode(root, 15);
    root = insertNode(root, 7);
    root = insertNode(root, 12);

    printf("Inorder Traversal: \n");
    inorderTraversal(root);
    return 0;
}
