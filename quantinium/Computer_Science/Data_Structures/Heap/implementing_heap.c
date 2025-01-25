#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

typedef struct heap {
    int *arr;
    int capacity;
    int size;
} heap;

heap *createHeap(int capacity) {
    heap *newheap = (heap *)malloc(sizeof(heap));
    if (newheap == NULL) {
        printf("couldn't allocate heap");
        exit(EXIT_FAILURE);
    }
    newheap->capacity = capacity;
    newheap->size = 0;
    newheap->arr = (int *)malloc(capacity * sizeof(int));
    return newheap;
}

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insert(heap *heap, int key) {
    if (heap->size == heap->capacity) {
        printf("Heap Overflow");
        return;
    }

    int index = heap->size;
    heap->arr[index] = key;
    heap->size++;

    while (index != 0 && heap->arr[(index - 1) / 2] < heap->arr[index]) {
        swap(&heap->arr[(index - 1) / 2], &heap->arr[index]);
        index = (index - 1) / 2;
    }
}

void printHeap(heap *heap) {
    printf("Heap: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

void heapify(heap *heap, int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap->size && heap->arr[left] > heap->arr[largest]) {
        largest = left;
    }
    if (right < heap->size && heap->arr[right] > heap->arr[largest]) {
        largest = right;
    }
    if (largest != index) {
        swap(&heap->arr[index], &heap->arr[largest]);
        heapify(heap, largest);
    }
}

void deleteElement(heap *heap, int target) {
    int i;
    for (i = 0; i < heap->size; i++) {
        if (heap->arr[i] == target) {
            break;
        }
    }
    if (i == heap->size) {
        printf("Element not found in the heap\n");
        return;
    }
    heap->arr[i] = heap->arr[heap->size - 1];
    heap->size--;
    heapify(heap, i);
}

void updateElement(heap *heap, int old, int new_value) {
    int i;
    for (i = 0; i < heap->size; i++) {
        if (heap->arr[i] == old)
            break;
    }
    if (i == heap->size) {
        printf("Element not found in the heap\n");
        return;
    }
    heap->arr[i] = new_value;

    while (i != 0 && heap->arr[(i - 1) / 2] < heap->arr[i]) {
        swap(&heap->arr[(i - 1) / 2], &heap->arr[i]);
        i = (i - 1) / 2;
    }
    heapify(heap, i);
}

void buildHeap(heap *heap, int *arr, int size) {
    if (size > heap->capacity) {
        printf("Entered size exceeds capacity\n");
        return;
    }
    heap->size = size;
    for (int i = 0; i < size; i++) {
        heap->arr[i] = arr[i];
    }
    for (int i = (heap->size - 1) / 2; i >= 0; i--) {
        heapify(heap, i);
    }
}

heap *mergeHeap(heap *heap_1, heap *heap_2) {
    int total_capacity = heap_1->capacity + heap_2->capacity;
    heap *mergeHeap = createHeap(total_capacity);

    mergeHeap->size = heap_1->size + heap_2->size;

    for (int i = 0; i < heap_1->size; i++) {
        mergeHeap->arr[i] = heap_1->arr[i];
    }
    for (int i = 0; i < heap_2->size; i++) {
        mergeHeap->arr[heap_1->size + i] = heap_2->arr[i];
    }
    for (int i = (mergeHeap->size - 1) / 2; i >= 0; i--) {
        heapify(mergeHeap, i);
    }

    return mergeHeap;
}

int main() {
    heap *hp = createHeap(MAX_HEAP_SIZE);

    insert(hp, 10);
    insert(hp, 20);
    insert(hp, 15);
    insert(hp, 40);
    insert(hp, 50);
    insert(hp, 100);
    insert(hp, 25);

    printf("Heap after insertions: ");
    printHeap(hp);

    deleteElement(hp, 20);
    printf("Heap after deletion of 20: ");
    printHeap(hp);

    updateElement(hp, 25, 30);
    printf("Heap after updating 25 to 30: ");
    printHeap(hp);

    heap *hp_2 = createHeap(MAX_HEAP_SIZE);
    int array[] = {8, 12, 6, 15, 4};
    buildHeap(hp_2, array, sizeof(array) / sizeof(array[0]));
    printf("Heap built from array: ");
    printHeap(hp_2);

    heap *mergedHeap = mergeHeap(hp, hp_2);
    printf("Merged heap: ");
    printHeap(mergedHeap);

    free(hp->arr);
    free(hp);
    free(hp_2->arr);
    free(hp_2);
    free(mergedHeap->arr);
    free(mergedHeap);

    return 0;
}
