#include <stdio.h>
#include <stdlib.h>

typedef struct treenode {
    int value;
    struct treenode *left;
    struct treenode *right;
} treenode;

treenode *createNode(int value) {
    treenode *newnode = (treenode *)malloc(sizeof(treenode));
    if (newnode == NULL) {
        printf("Couldn't allocate memory for a newnode");
        exit(EXIT_FAILURE);
    } else {
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->value = value;
    }
    return newnode;
}

treenode *insert(treenode *root, int value) {
    if (root == NULL) {
        root = createNode(value);
    } else if (value <= root->value) {
        root->left = insert(root->left, value);
    } else if (value >= root->value) {
        root->right = insert(root->right, value);
    }
    return root;
}

treenode *search(treenode *root, int target) {
    if (root == NULL || root->value == target) {
        return root;
    } else if (target > root->value) {
        return search(root->left, target);
    }
    return search(root->right, target);
}

treenode *minValueNode(treenode *node) {
    treenode *current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

treenode *deleteNode(treenode *root, int target) {
    if (root == NULL) {
        return root;
    }
    if (target < root->value) {
        root->left = deleteNode(root->left, target);
    } else if (target < root->value) {
        root->right = deleteNode(root->right, target);
    } else {
        if (root->left == NULL) {
            treenode *temp = root->right;
            free(root);
            return temp;
        } else {
            treenode *temp = root->left;
            free(root);
            return temp;
        }

        treenode *temp = minValueNode(root->right);
        root->value = temp->value;
        root->right = deleteNode(root->right, temp->value);
    }
    return root;
}

void inorder(treenode *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d", root->value);
        inorder(root->right);
    }
}
int main() {
    treenode *root = NULL;
    root = insert(root, 5);
    root = insert(root, 18);
    root = insert(root, 12);
    root = insert(root, 8);
    root = insert(root, 2);

    printf("In-order traversal: ");
    inorder(root);
    printf("\n");

    treenode *found = search(root, 5);
    if (found != NULL) {
        printf("Element found: %d\n", found->value);
    } else {
        printf("Element not found\n");
    }

    root = deleteNode(root, 5);
    printf("In-order traversal after deleting 5: ");
    inorder(root);
    printf("\n");
}
