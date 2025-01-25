#include <stdio.h>

int linear_search(int arr[10], int target, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {12, 2, 28, 47, 1, 89, 27, 37, 9, 8};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int target = 28;

    int index = linear_search(arr, target, size);
    if (index != -1) {
        printf("the %d was found at index: %d\n", target, index);
    } else {
        printf("%d was not found the in the list", target);
    }
}
