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

int binary_search_recursive(int *arr, int low, int high, int target) {
    if (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else {
            if (arr[mid] > target) {
                return binary_search_recursive(arr, low, mid - 1, target);
            } else {
                return binary_search_recursive(arr, mid + 1, high, target);
            }
        }
    }
    return -1;
}

int ternary_search(int *arr, int low, int high, int target) {
    if (low <= high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = mid1 + (high - low) / 3;

        if (arr[mid1] == target) {
            return mid1;
        }
        if (arr[mid2] == target) {
            return mid2;
        }

        if (arr[mid1] > target) {
            return ternary_search(arr, low, mid1 - 1, target);
        } else if (arr[mid2] < target) {
            return ternary_search(arr, mid2 + 1, high, target);
        } else {
            return ternary_search(arr, mid1 + 1, mid2 - 1, target);
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
    int binary_index_recursive =
        binary_search_recursive(arr, 0, size - 1, target);
    int ternary_index = ternary_search(arr, 0, size - 1, target);

    printf("Linear search: %d\n", linear_index);
    printf("Binary Search: %d\n", binary_index);
    printf("Binary Search Recursive: %d\n", binary_index_recursive);
    printf("Ternary Search: %d\n", ternary_index);
}
