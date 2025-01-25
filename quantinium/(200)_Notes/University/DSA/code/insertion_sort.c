#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void insertion_sort(int arr[10], int size) {
    for(int i = 0; i < size; i++) {
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
}

int main() {
    int arr[10] = {12, 2, 28, 47, 1, 89, 27, 37, 9, 8};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    insertion_sort(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

