>A **binary tree** data structure is is a hierarchical data structures in which each node have at most two children referred to as left child and right child..

![[implementing_binary_tree.c]]
### Properties
1. The maximum no of nodes at level 'l' is given by 2$^l$. So at the top the total possible nodes is 2$^0$ = 1, and 2$^1$ = 2 at level 1 which are the two children nodes.
2. The maximum no of nodes in a binary tree of height 'h' is given by 2$^h$ - 1. Max nodes of Binary tree of height 3 is 2$^3$ - 1 = 8 - 1 = 7.
3. In a binary tree with 'n' nodes the min possible height is given by log$_2$(n + 1). A tree with 7 nodes i.e. log$_2$(8) = 3.
4. A binary tree with 'l' leaves has at least (|log$_2$(l)| + 1) levels.
5. In a binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children.
6. In a non empty binary tree, if n is the total no. of nodes and e is the total no of edges then e = n - 1.

[[Binary_Tree.excalidraw]]
### Types of Binary Tree
#### Based on number of children
1. **Full Binary Tree** - A binary tree is a full binary tree if every node has 0 or 2 children.
2. **Degenerate Binary Tree** - A tree where every internal node has one child. it just a linked list.
3. S**kewed Binary Tree** - A pathological / degenerate tree in which the tree is either dominated by right or left nodes.

#### Based on Completion Levels
1. **Completely Binary Tree** - A Binary Tree is a Complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible.
2. **Perfect Binary Tree** -A Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level.
3. **Balanced Binary Tree** - A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes.

### Binary Search Tree
****Binary Search Tree**** is a node-based binary tree data structure that has the following properties:

- The left subtree of a node contains only nodes with keys lesser than the node’s key.
- The right subtree of a node contains only nodes with keys greater than the node’s key.
- The left and right subtree each must also be a binary search tree.

### AVL Trees
**AVL tree** is a self-balancing Binary Search Tree (***BST***) where the difference between heights of left and right subtrees cannot be more than one for all nodes.

