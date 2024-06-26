A ****Heap**** is a complete binary tree data structure that satisfies the heap property: for every node, the value of its children is less than or equal to its own value. Heaps are often used to implement priority queues, where the smallest (or largest) element is always at the root of the tree.

![[Pasted image 20240302011502.png]]

### Properties 
Since heap are stored as array. We relate the parent node and the child node in array form. For example above min heap is represented as - 
>[10, 15, 30, 40, 50, 100, 40] min heap
>[100, 40, 50, 10, 15, 50, 40] max heap

1. Parent node = floor(i / 2);
2. left child node = 2 * i + 1
3. right child node = 2 * i + 2
### Operations
1. Heapify - Process the arrange the elements in such a way that it maintains the heap property(min or max heap). **O(Log N)**
2. Insertion - *O(Log N)*
3. Deletion - *O(Log N)*
4. getMax - *O(1)*

![[implementing_heap.excalidraw]]
![[implementing_heap.c]]
