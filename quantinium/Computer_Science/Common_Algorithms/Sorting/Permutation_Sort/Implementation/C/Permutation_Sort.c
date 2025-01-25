#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_sorted(int *a, int size) {
  for (int i = 0; i < size - 1; i++) {
    if (a[i] > a[i + 1]) {
      return 0;
    }
  }
  return 1;
}

void print_shuffled_array(int *arr, size_t size) {
  printf("[");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");
}

void shuffle(int *arr, size_t size) {
  int temp, random;
  for (int i = 0; i < size; i++) {
    random = (int)((double)rand() / ((double)RAND_MAX + 1) * size);
    temp = arr[random];
    arr[random] = arr[i];
    arr[i] = temp;
  }
  print_shuffled_array(arr, size);
}

void bogo_sort(int *arr, size_t size) {
  while (!is_sorted(arr, size)) {
    shuffle(arr, size);
  }
}

int main() {
  int arr[10] = {60, 59, 14, 58, 61, 84, 78, 30, 9, 20};
  size_t size = sizeof(arr) / sizeof(arr[0]);
  srand(time(NULL));

  bogo_sort(arr, size);

  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
}
