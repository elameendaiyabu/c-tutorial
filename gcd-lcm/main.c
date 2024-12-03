#include <stdio.h>

int gcd(int a, int b) {
  int result;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      for (int j = 1; j <= b; j++) {
        if (b % j != 0) {
          continue;
        } else {
          if (i == j) {
            result = i;
          } else {
            continue;
          }
        }
      }
    } else {
      continue;
    }
  }
  return result;
}

int lcm(int a, int b) {
  int result;
  result = b * (a / gcd(a, b));
  return result;
}

int main(int argc, char *argv[]) {
  printf("%d is the gcd\n", gcd(54, 24));
  printf("%d is the lcm\n", lcm(21, 6));
  return 0;
}
