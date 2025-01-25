#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Graph {
    Node *head[MAX_NODES];
    int visited[MAX_NODES];
} Graph;

Node* createNode(int data) {
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data =data;
    newnode->next = NULL;
    return newnode;
}

Graph* createGraph(int n) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    for(int i = 0; i < n; ++i) {
        graph->head[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    Node* newnode = createNode(dest);
    newnode->next = graph->head[src];
    graph->head[src] = newnode;

    newnode = createNode(src);
    newnode->next = graph->head[dest];
    graph->head[dest]  = newnode;
}

void BFS(Graph* graph, int start) {
    // Create a queue for BFS
    int queue[MAX_NODES];
    int front = 0, rear = 0;

    // Enqueue the starting node
    queue[rear++] = start;
    graph->visited[start] = 1;

    while (front < rear) {
        // Dequeue a vertex from queue and print it
        int current = queue[front++];
        printf("%d ", current);

        // Get all adjacent vertices of the dequeued vertex current
        // If an adjacent vertex has not been visited, then mark it visited
        // and enqueue it
        Node* temp = graph->head[current];
        while (temp != NULL) {
            int adj = temp->data;
            if (!graph->visited[adj]) {
                graph->visited[adj] = 1;
                queue[rear++] = adj;
            }
            temp = temp->next;
        }
    }
}
int main() {
    Graph *graph = createGraph(6);

    // Add edges
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    printf("Breadth First Traversal starting from vertex 0: ");
    BFS(graph, 0);

    return 0;
}

