#include <stdio.h>
void reverse(int *arr, int length) {
  int reversedArray[length];
  int *x = &arr[0];
  //{2,5,1,67,34} => {34,67,1,5,2}
  for (int i = 0; i < length; i++) {
    reversedArray[length - 1 - i] = *x;
    x++;
  }

  for (int i = 0; i < length; i++) {
    printf("%d ", reversedArray[i]);
  }
}

int main(int argc, char *argv[]) {
  // reverse array using pointer arithmetic

  int arr[5] = {2, 5, 1, 67, 34};

  reverse(arr, 5);

  return 0;
}
