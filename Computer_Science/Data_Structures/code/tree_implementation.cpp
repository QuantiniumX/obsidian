#include <iostream>

class TreeNode {
   public:
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree {
   private:
    TreeNode *root;

   public:
    BinaryTree() { root = nullptr; }

    void insert(int data) { root = insertRecursive(root, data); }

    TreeNode *insertRecursive(TreeNode *node, int data) {
        if (node == nullptr) {
            return new TreeNode(data);
        }
        if(data < node->data) {
            node->left = insertRecursive(node->left, data);
        } else if(data > node->data) {
            node->right = insertRecursive(node->right, data);
        }
        return node;
    }

    void inorderedTraversal() {
        inorderedRecursive(root);
    }

    void inorderedRecursive(TreeNode* node) {
        if(node != nullptr) {
            inorderedRecursive(node->left);
            std::cout << node->data << std::endl;
            inorderedRecursive(node->right);
        }
    }
};

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);

    std::cout << "Inorder traversal: ";
    tree.inorderedTraversal();
    std::cout << std::endl;

    return 0;
}
