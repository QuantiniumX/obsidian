#include <stdio.h>

#define MAX_VERTICES 100

typedef struct graph {
    int numVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
} graph;

void initGraph(graph *gp, int numVertices) {
    gp->numVertices = numVertices;
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            gp->adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(graph *gp, int src, int dest) {
    gp->adjMatrix[src][dest] = 1;
    gp->adjMatrix[dest][src] = 1;
}

void removeEdge(graph *gp, int src, int dest) {
    gp->adjMatrix[src][dest] = 0;
    gp->adjMatrix[dest][src] = 0;
}

int hasEdge(graph *gp, int src, int dest) { return gp->adjMatrix[src][dest]; }

// depth first search
void search(graph *gp, int vertex, int visited[]) {
    visited[vertex] = 1;
    for (int i = 0; i < gp->numVertices; i++) {
        if (gp->adjMatrix[vertex][i] == 1 && visited[i] == 0) {
            search(gp, i, visited);
        }
    }
}

int isConnected(graph *gp) {
    int visited[MAX_VERTICES] = {0};
    search(gp, 0, visited);
    for (int i = 0; i < gp->numVertices; i++) {
        if (visited[i] == 0) {
            return 0;
        }
    }
    return 1;
}

void printGraph(graph *gp) {
    printf("Adjacency Matrix Representation:\n");
    for (int i = 0; i < gp->numVertices; i++) {
        for (int j = 0; j < gp->numVertices; j++) {
            printf("%d", gp->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    graph gp;
    int numVertices = 5;
    initGraph(&gp, numVertices);
    addEdge(&gp, 0, 1);
    addEdge(&gp, 0, 4);
    addEdge(&gp, 1, 2);
    addEdge(&gp, 1, 3);
    addEdge(&gp, 1, 4);
    addEdge(&gp, 2, 3);
    addEdge(&gp, 3, 4);
    printf("Graph after adding edges:\n");
    printGraph(&gp);

    int src = 1, dest = 3;
    if (hasEdge(&gp, src, dest)) {
        printf("\nThere is an edge between vertex %d and vertex %d.\n", src,
               dest);
    } else {
        printf("\nThere is no edge between vertex %d and vertex %d.\n", src,
               dest);
    }

    removeEdge(&gp, 1, 3);
    printf("\nGraph after removing edge between vertex %d and vertex %d:\n",
           src, dest);
    printGraph(&gp);

    if (isConnected(&gp)) {
        printf("\nThe graph is connected.\n");
    } else {
        printf("\nThe graph is not connected.\n");
    }
}
