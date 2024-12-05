#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

void linear(int numArray[], int num) {
  int length = sizeof(*numArray);
  bool found = false;

  for (int i = 0; i < length; i++) {
    if (numArray[i] == num) {
      printf("element found at array position %d\n", i);
      found = true;
    }
  }

  if (!found) {
    printf("element not found in array\n");
  }
}

void binary(int numArray[], int num) {
  int length = sizeof(*numArray);
  int left = 0, right = length + 1;
	bool found = false;
  do {
    int middle = floor((left + right) / 2);

    if (numArray[middle] < num) {
      left = middle + 1;
    } else if (numArray[middle] > num) {
      right = middle - 1;
    } else {
      printf("element found at position %d\n", middle);
			found = true;
      break;
    }
  } while (left <= right);

	if (!found) {
		printf("element not in array\n");
	}
}

int main(int argc, char *argv[]) {
  // implement linear and binary search for int array
  // two parameters (array of int, int to search)

  int array[] = {1, 5, 42, 54, 2}; // {1,2,5,42,54}
  int sorted[] = {1, 2, 5, 76, 85, 99};
  // linear(array, 42);
  binary(sorted, 85);
  return 0;
}
