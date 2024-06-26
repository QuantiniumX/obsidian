#include <stdio.h>

void merge(int *arr, size_t low, size_t mid, size_t high) {
  size_t i, j, k;
  size_t n1 = mid - low + 1;
  size_t n2 = high - mid;

  int first[n1], second[n2];

  // Initialize two arrays
  for (i = 0; i < n1; i++) {
    first[i] = arr[low + i];
  }
  for (j = 0; j < n2; j++) {
    second[j] = arr[mid + 1 + j];
  }

  i = 0, j = 0;
  k = low;
  while (i < n1 && j < n2) {
    if (first[i] <= second[j]) {
      arr[k] = first[i];
      i++;
    } else {
      arr[k] = second[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = first[i];
    i++, k++;
  }

  while (j < n2) {
    arr[k] = second[j];
    j++, k++;
  }
}

void merge_sort(int *arr, size_t low, size_t high) {
  if (low >= high) {
    return;
  }
  size_t mid = low + (high - low) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

int main() {
  int array[10] = {37, 12, 89, 5, 61, 23, 8, 45, 72, 16};
  size_t size = sizeof(array) / sizeof(array[0]);

  merge_sort(array, 0, size - 1);

  printf("After Sorting the array: \n");
  for (size_t i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
