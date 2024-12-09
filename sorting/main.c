#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

void bubble(int numArray[]) {
  int length = sizeof(*numArray);
  int temp;
  bool sorted = false;

  // {1,5,7,2,10,8}
  while (!sorted) {
    bool swapped = false;
    for (int i = 0; i <= length; i++) {
      if (numArray[i] > numArray[i + 1]) {
        temp = numArray[i];
        numArray[i] = numArray[i + 1];
        numArray[i + 1] = temp;
        swapped = true;
      }
    }
    if (!swapped) {
      sorted = true;
    }
  }

  for (int i = 0; i <= length; i++) {
    printf("%d ", numArray[i]);
  }
  printf("\n");
}

void selection(int array[] ) {
  int length = 9;
  int temp, idx;
  int leftmost = 0;
  for (int i = 0; i<length; i++) {
    int smallest = array[i];
    idx = i;
    for (int j = i + 1; j < length; j++) {
      if (array[j] < smallest) {
        smallest = array[j];
        idx = j;
      }
    }
    temp = array[i];
    array[idx] = array[i];
    array[leftmost] = smallest;
    leftmost++;
  }
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}


void insertion(int arr[])
{
  int n = 9;
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        /* Move elements of arr[0..i-1], that are
           greater than key, to one position ahead
           of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");

}

int main(int argc, char *argv[]) {
  // sort array using bubble, selection and insertion
  // take in arr if int
  int array[9] = {1, 5, 7, 2, 10, 8, 43, 22, 18};

  // bubble(array); // result = {1,2,5,7,8,10}
  // selection(array);
  insertion(array);
  return 0;
}
