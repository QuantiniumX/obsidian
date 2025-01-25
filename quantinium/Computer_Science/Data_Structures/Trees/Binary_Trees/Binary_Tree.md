A binary tree is a hierarchical data structure that may be imagined like a roots of the Tree(Yeah it's called a tree even though they look like roots). One node have at most one parent node and at most two child nodes.

![Binary Tree](https://storage.googleapis.com/qvault-webapp-dynamic-assets/course_assets/kZfcDcx.png)

```
        (A)
       /   \
     (B)   (C)
    /   \
   (D)  (E) 
  /
 (F)

node   | (A) | (B) | (C) | (D) | (E) | (F) |
item   |  A  |  B  |  C  |  D  |  E  |  F  |
parent |  -  | (A) | (A) | (B) | (B) | (D) |
left   | (B) | (C) |  -  | (F) |  -  |  -  |
right  | (C) | (E) |  -  |  -  |  -  |  -  |
```
## Terminology
- **Root Node** - The node at the top of the tree is called the root node. This is the node where all other nodes branch from. It has no parent node.
- **Leaf Node** - The nodes at the end of the tree. These nodes have no children.
- **Depth** - The depth (X) of node (X) in a tree root at (A) is the length of path from (X) to (A).
- **Height** - The height (X) of node (X) to be a max depth of any node in the sub-tree rooted at (X).
- **Idea** - Design operations to run in O(h) time for height h, and maintain height of h = logN.
- **Traversal Order** - A binary tree has an inherent order. 
    - every node in node (X)'s left sub-tree is before (X).
    - every node in node (X)'s right sub-tree is after (X).
- List nodes in traversal order via a recursive algorithm starting at root.
    - Recursively left sub-tree, then root, the right sub-tree.
    - Example - ```(F), (D), (B), (E), (A), (C)```.

## Operations
- **Find First Node** - Its the first node that will occur on traversing it. In our example it is ```(F)```. Running time - O(h).
- **Find Successor** - Its the next node to node (X) in in-order traversal. Running time - O(h).
- **Insert** - node (Y) after node (X) in traversal order. Running time - O(h).



