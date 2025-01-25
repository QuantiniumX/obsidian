A **Graph** is a non linear data structures consisting of vertices and edged. The vertices and sometimes also referred to as nodes and the edges are lines of arcs that connect any two nodes in the graph. 
A **Graph** denoted by **G(V,E)**.


![[Graph.excalidraw]]

### Representation of Graphs
1. [Adjacency Matrix](https://en.wikipedia.org/wiki/Adjacency_matrix)  - its a way to represent graph in terms of a matrix with 1 representing the node being connected and 0 representing the node being disconnected.

![[Pasted image 20240307020145.png]]
1. [Adjacency List](https://en.wikipedia.org/wiki/Adjacency_list) - Its a way to represent a graph using linked lists. we create a linked list for every node that is present in graph and make it connection accordingly.

![[Pasted image 20240307020329.png]]

### Comparing adjacency matrix and list
| Action           | Adjacency Matrix | Adjacency List |
| ---------------- | ---------------- | -------------- |
| Adding edge      | O(1)             | O(1)           |
| Removing an edge | O(1)             | O(N)           |
| initializing     | O(N$^2$)         | O(N)           |

### Types of Graphs
1. Un-directed Graphs - A graph with has links but is direction is not assigned. 
2. Directed Graphs - A graph where the direction is assigned.
3. Weighted Graphs - A graph in which the edges have weights. Eg maps having distance between two points.
4. Unweighted Graphs - A graph in which the edges have no weight or cost associated to them.
5. Complete Graphs - A graph in which each node is connected to each node. Eg tournament matchmaking.
6. Bipartite Graphs - A bipartite graph is a type of graph in which the vertices can be divided into two disjoint sets such that no two vertices within the same set are adjacent. Eg. one set of students and other set of courses enrolled. The edges are the connection between them.
7. Sparse Graphs - A graph with not many edges.
8. Dense Graphs - A graph with a lot of edges.

![[implementing_graph.c]]