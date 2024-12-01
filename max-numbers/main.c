#include <stdio.h>
int main(int argc, char *argv[]) {
  // find largest of 3 numbers
  int a = 10;
  int b = 8;
  int c = 1;

  if (a > b && a > c) {
    printf("%d is the largest number\n", a);
  } else if (b > a && b > c) {
    printf("%d is the largest number\n", b);
  } else {
    printf("%d is the largest number\n", c);
  }
  return 0;
}
