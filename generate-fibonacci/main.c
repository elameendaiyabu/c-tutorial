#include <stdio.h>

// using loops
int fibLoop(int x) {
  int prev = 0, current = 1, result;
  for (int i = 1; i < x; ++i) {
    result = prev + current;
    prev = current;
    current = result;
  }
  return result;
}

// using recursion
int fibRecursion(int x) {
  // define base case
  if (x == 0) {
    return 0;
  } else if (x == 1) {
    return 1;
  }
  return fibRecursion(x - 1) + fibRecursion(x - 2);
}

int main(int argc, char *argv[]) {
  // generate fib sequence
  printf("%d\n", fibLoop(10));
  printf("%d\n", fibRecursion(11));
  return 0;
}
