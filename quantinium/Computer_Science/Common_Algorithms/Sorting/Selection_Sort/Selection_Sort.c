#include <stdio.h>

void selection_sort(int *arr, size_t size) {
  for (size_t i = 0; i < size; i++) {
    size_t smallest_idx = i;
    for (size_t j = i; j < size; j++) {
      if (arr[j] < arr[smallest_idx]) {
        smallest_idx = j;
      }
    }
    if (smallest_idx != i) {
      int temp = arr[smallest_idx];
      arr[smallest_idx] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {
  int arr[10] = {12, 15, 5, 1, 5, 18, 26, 4, 7, 13};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  selection_sort(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
