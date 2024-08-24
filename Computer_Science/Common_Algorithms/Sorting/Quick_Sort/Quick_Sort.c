#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

size_t partition(int *arr, size_t low, size_t high) {
    int pivot = arr[high];
    size_t i = low;
    for (size_t j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);
    return i;
}

void quick_sort(int *arr, size_t low, size_t high) {
    if (low >= high || low < 0) {
        return;
    }
    size_t par = partition(arr, low, high);
    quick_sort(arr, low, par - 1);
    quick_sort(arr, par + 1, high);
}

int main() {
    int array[10] = {37, 12, 89, 5, 61, 23, 8, 45, 72, 16};
    size_t size = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, size - 1);

    printf("After Sorting the array: \n");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}
