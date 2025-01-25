#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int left_arr[n1], right_arr[n2];

    for (int i = 0; i < n1; i++) {
        left_arr[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++) {
        right_arr[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2) {
        if (left_arr[i] <= right_arr[j]) {
            arr[k] = left_arr[i];
            i++;
            k++;
        } else {
            arr[k] = right_arr[j];
            j++;
            k++;
        }
    }

    while (i < n1) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[10] = {12, 2, 28, 47, 1, 89, 27, 37, 9, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    merge_sort(arr, 0, size - 1);

    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}
