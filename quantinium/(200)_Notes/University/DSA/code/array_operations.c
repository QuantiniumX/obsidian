#include <stdio.h>

void display(int arr[10], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insert(int arr[10], int* size, int pos, int element) {
    if(pos < 0 || pos >= *size) {
        printf("out of bounds");
        return;
    }

    for(int i = *size - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;
    (*size)++;
}

void delete(int arr[10], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("out of bounds");
        return;
    }

    for(int i = pos; i < *size; i++) {
        arr[i] = arr[i + 1];
    }

    (*size)--;
}

void update(int arr[10], int size, int pos, int data) {
    if (pos < 0 || pos >= size) {
        printf("out of bounds");
        return;
    }
    
    arr[pos] = data;
}
int main() {
    int arr[11] = {1, 2, 8, 9, 12, 27, 28, 37, 47, 89};
    int size = 10;

    printf("diplaying the array");
    display(arr, size);
    printf("inserting the array");
    insert(arr, &size, 2, 90);
    display(arr, size);
    printf("deleting the array");
    delete(arr, &size, 2);
    display(arr, size);
    printf("updating the array");
    update(arr, size, 2, 6);
    display(arr, size);
}
