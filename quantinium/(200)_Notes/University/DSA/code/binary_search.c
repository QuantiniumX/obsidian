#include <stdio.h>

int binary_search(int arr[10], int target, int size) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (target == arr[mid]) {
            return mid;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {1, 2, 8, 9, 12, 27, 28, 37, 47, 89};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int target = 1;

    int index = binary_search(arr, target, size);
    if (index != -1) {
        printf("the %d was found at index: %d\n", target, index);
    } else {
        printf("%d was not found the in the list", target);
    }
}
