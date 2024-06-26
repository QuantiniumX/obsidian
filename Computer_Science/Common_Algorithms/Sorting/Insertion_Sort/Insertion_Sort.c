#include <stdio.h>

// Doing in-place swapping of array elements
void Insertion_Sort(int *arr, size_t size) {
  for (size_t i = 0; i < size; i++) {
    int key = arr[i];
    size_t j = i;
    while (j > 0 && arr[j - 1] > key) {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = key;
  }
}

int main() {
  int array[10] = {37, 12, 89, 5, 61, 23, 8, 45, 72, 16};
  size_t size = sizeof(array) / sizeof(array[0]);

  Insertion_Sort(array, size);

  printf("After Sorting the array: \n");
  for (size_t i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}

// void swap(int *x, int *y) {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
// }
//
// void Insertion_Sort(int *arr, size_t size) {
//   for (int i = 0; i < size; i++) {
//     int j = i;
//     while (j > 0 && arr[j - 1] > arr[j]) {
//       swap(&arr[j - 1], &arr[j]);
//       j--;
//     }
//   }
// }
//
//
//Jon Bentley's Three Liner for Insertion_Sort
//void Insertion_Sort(int *arr, size_t size) {
//  for (size_t i = 1; i < size; i++) {
//    for (size_t j = i; j > 0 && arr[j - 1] > arr[j]; j--) {
//      std::swap(arr[j - 1], arr[j]);
//    }
//  }
//}
