#include <stdbool.h>
#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[8] = {5, 2, 7, 1, 8, 3, 6, 4};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    bool sorted = false;
    size_t unsorted_index = size - 1;
    while (!sorted) {
        sorted = true;
        for (int i = 0; i < unsorted_index; i++) {
            if (arr[i] > arr[i + 1]) {
                swap(&arr[i], &arr[i + 1]);
                sorted = false;
            }
        }
        unsorted_index--;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
