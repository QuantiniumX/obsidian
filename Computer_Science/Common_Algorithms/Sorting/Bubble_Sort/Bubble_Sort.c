#include <stdbool.h>
#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

// OPTIMIZED BUBBLE SORT
void bubble_sort(int *arr, size_t size) {
  bool swapped = true;
  size_t n = size;
  while (swapped) {
    swapped = false;
    for (size_t i = 1; i < n; i++) {
      if (arr[i - 1] > arr[i]) {
        swap(&arr[i - 1], &arr[i]);
        swapped = true;
      }
    }
    n--; // Optimization
  }
}

int main() {
  int array[10] = {37, 12, 89, 5, 61, 23, 8, 45, 72, 16};
  size_t size = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, size);

  printf("After Sorting the array: \n");
  for (size_t i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}

// SECOND IMPLEMENTATION
// void bubble_sort(int *arr, size_t size) {
//   bool swapped = true;
//   while (swapped) {
//     swapped = false;
//     for (int i = 1; i < size; i++) {
//       if (arr[i - 1] > arr[i]) {
//         swap(&arr[i - 1], &arr[i]);
//         swapped = true;
//       }
//     }
//   }
// }

// FIRST IMPLEMENTATION
// void swap(int *x, int *y) {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }
//
// void bubble_sort(int *array, size_t size) {
//   for (int i = 0; i < size; i++) {
//     for (int j = 0; j < size - i - 1; j++) {
//       if (array[j] > array[j + 1]) {
//         swap(&array[j], &array[j + 1]);
//       }
//     }
//   }
// }
