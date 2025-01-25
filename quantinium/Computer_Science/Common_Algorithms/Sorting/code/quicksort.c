#include <stdio.h>

int partition(int arr[10], int lo, int hi) {
    int pivot = arr[hi];
    int index = lo - 1;
    for (int i = lo; i < hi; i++) {
        if (arr[i] <= pivot) {
            index++;
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }

    index++;
    arr[hi] = arr[index];
    arr[index] = pivot;
    return index;
}

void quicksort(int arr[10], int lo, int hi) {
    if (lo >= hi) {
        return;
    }
    int pivot_index = partition(arr, lo, hi);
    quicksort(arr, lo, pivot_index - 1);
    quicksort(arr, pivot_index + 1, hi);
}
int main() {
    int arr[10] = {12, 15, 5, 1, 5, 18, 26, 4, 7, 13};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
