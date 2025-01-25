#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

Queue *createQueue() {
    Queue *newqueue = (Queue *)malloc(sizeof(Queue));
    if (newqueue == NULL) {
        printf("could allocate queue\n");
        exit(EXIT_FAILURE);
    }
    newqueue->front = -1;
    newqueue->rear = -1;
    return newqueue;
}

int isEmpty(Queue *queue) { return queue->front = -1; }

void enqueue(Queue *queue, int value) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue overflow can't enqueue value\n");
        return;
    }
    if (queue->front == -1) {
        queue->front = 0;
    }
    queue->rear++;
    queue->items[queue->rear] = value;
}

int dequeue(Queue *queue) {
    if (queue->front == -1) {
        printf("Queue is empty. can't dequeue\n");
        return -1;
    }

    int value = queue->items[queue->front];
    queue->front++;
    if (queue->front > queue->rear) {
        queue->front = queue->rear = -1;
    }
    return value;
}

void BFS(int **graph, int vertices, int start) {
    int i, current;
    int visited[vertices];
    Queue *queue = createQueue();

    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }

    visited[start] = 1;
    enqueue(queue, start);

    while (!isEmpty(queue)) {
        current = dequeue(queue);
        printf("%d ", current);

        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] && !visited[i]) {
                visited[i] = 1;
                enqueue(queue, i);
            }
        }
    }

    free(queue);
}

int main() {
    int vertices = 5, i, j, start = 2;
    int **graph = (int **)malloc(vertices * sizeof(int *));
    if (graph == NULL) {
        printf("Memory allocation failed\n");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < vertices; i++) {
        graph[i] = (int *)malloc(vertices * sizeof(int));
        if (graph[i] == NULL) {
            printf("Memory allocation failed\n");
            return EXIT_FAILURE;
        }
    }

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("BFS Traversal starting from vertex %d: ", start);
    BFS(graph, vertices, start);
    printf("\n");

    for (i = 0; i < vertices; i++) {
        free(graph[i]);
    }
    free(graph);

    return EXIT_SUCCESS;
}
