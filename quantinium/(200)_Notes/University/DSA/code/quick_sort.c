#include <stdio.h>
#include <stdlib.h>

/* int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
} */

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

int main() {
    int arr[10] = {12, 2, 28, 47, 1, 89, 27, 37, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    /*     qsort(arr, size, sizeof(arr[0]), compare); */
    quick_sort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
