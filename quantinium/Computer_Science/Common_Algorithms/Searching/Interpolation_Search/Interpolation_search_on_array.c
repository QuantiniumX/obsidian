#include <stdio.h>

int interpolation_search(int arr[], int target, size_t size) {
    size_t min = 0, max = size - 1;
    while(min <= max && target >= arr[min] && target <= arr[max]) {
        int probe = min + (max - min) * (target - arr[min]) / (arr[max] - arr[min]);
        if(arr[probe] == target) {
            return probe;
        } else {
            if(arr[probe] > target) {
                max = max - 1;
            } else {
                min = min + 1;
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

    int index = interpolation_search(arr, target, size);

    if (index != -1) {
        printf("%d was found at index %d\n", target, index);
    } else {
        printf("%d was not found in the array\n", target);
    }
}
