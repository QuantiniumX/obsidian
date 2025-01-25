#include <stdio.h>

int binary_search(int arr[], int target, size_t size) {
    size_t l = 0, r = size - 1;
    while (l <= r) {
        size_t mid = l + (r - l) / 2;
        if (arr[mid] == target) {
            return mid;
        } else {
            if (arr[mid] > target) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[10] = {2, 5, 8, 11, 15, 23, 34, 42, 48, 50};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    int target;

    printf("Enter the number you wanna find in the array\n");
    scanf("%d", &target);
    int index = binary_search(arr, target, size);
    if (index != -1) {
        printf("%d was found at index %d\n", target, index);
    } else {
        printf("%d was not found in the array\n", target);
    }
}
