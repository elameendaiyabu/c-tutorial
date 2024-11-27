#include <stdio.h>
int main(int argc, char *argv[]) {
  // collect nth number
  // use loop to print n numbers
  int n;

  printf("enter Nth number: ");
  scanf("%d", &n);

  if (n < 1) {
    printf("n should be a natural number\n");

    return 0;
  }

  for (int i = 1; i <= n; i++) {
    printf("%d\n", i);
  }

  return 0;
}
