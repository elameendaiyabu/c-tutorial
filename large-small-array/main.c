#include <stdio.h>

void largest(int arr[], int length) {
  int largest;

  while (1) {
    largest = arr[0];
    for (int i = 1; i < length; i++) {
      if (arr[i] > largest) {
        largest = arr[i];
      }
    }
    break;
  }

  printf("%d is the largest \n", largest);
}

void smallest(int arr[], int length) {
  int smallest;

  while (1) {
    smallest = arr[0];
    for (int i = 1; i < length; i++) {
      if (arr[i] < smallest) {
        smallest = arr[i];
      }
    }
    break;
  }

  printf("%d is the smallest \n", smallest);
}

int main(int argc, char *argv[]) {
  // find largest and smallest in array

  int arr[9] = {101, 1, 2, 4, 65, 56, 90, 34, 91};

  largest(arr, 9);
  smallest(arr, 9);
  return 0;
}
