#include <stdio.h>

void push_back(int *arr, int *size, int data, int pos) {
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = data;
    (*size)++;
}

void display(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void delete(int *arr, int *size, int pos) {
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void update(int *arr, int new, int pos) {
    arr[pos] = new;
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int pos = 5;

    push_back(arr, &size, 6, pos);
    display(arr, size);
    delete (arr, &size, pos);
    display(arr, size);
    update(arr, 7, 4);
    display(arr, size);

    return 0;
}
