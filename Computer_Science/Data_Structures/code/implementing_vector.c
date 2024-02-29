#include <stdio.h>
#include <stdlib.h>

#define INIT_ARR_SIZE 10

typedef struct {
    int *arr;
    int size;
    int capacity;
} vector;

void init_vector(vector* vec) {
    vec->arr = (int*)malloc(sizeof(int) * INIT_ARR_SIZE);
    if(vec->arr == NULL) {
        printf("Couldnt allocate the memory during initilization");
        exit(1);
    }
    vec->size = 0;
    vec->capacity = INIT_ARR_SIZE;
}

void push_back(vector* vec, int val) {
    if(vec->size == vec->capacity) {
        vec->capacity = vec->capacity * 2;
        vec->arr = (int*)realloc(vec->arr,sizeof(int) * vec->capacity);
        if(vec->arr == NULL) {
            printf("couldnt initialize the vector while increasing its size");
            exit(1);
        }
    }
    vec->arr[vec->size++] = val;
}

void vector_free(vector* vec) {
    free(vec->arr);
    vec->size = 0;
    vec->capacity = 0;
}

int main() { 
    vector vec;
    init_vector(&vec);

    push_back(&vec, 15);
    push_back(&vec, 5);
    push_back(&vec, 25);
    push_back(&vec, 12);
    push_back(&vec, 151);
    push_back(&vec, 51);
    push_back(&vec, 11);
    push_back(&vec, 251);
    push_back(&vec, 121);
    push_back(&vec, 151);
    push_back(&vec, 451);
    push_back(&vec, 152);
    push_back(&vec, 156);
    push_back(&vec, 21);
    push_back(&vec, 15);
    push_back(&vec, 34);
    push_back(&vec, 238);
    push_back(&vec, 38);
    push_back(&vec, 48);
    push_back(&vec, 48);

    for(int i = 0; i < vec.size; i++) {
        printf("%d\n", vec.arr[i]);
    }

    vector_free(&vec);
    return 0;
}
