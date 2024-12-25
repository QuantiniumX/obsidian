#include <stdio.h>

int linear_search(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binary_search(int *arr, int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else {
            if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int target = 1;
    int linear_index = linear_search(arr, size, target);
    int binary_index = binary_search(arr, size, target);

    printf("Linear search: %d\n", linear_index);
    printf("Binary Search: %d\n", binary_index);
}
