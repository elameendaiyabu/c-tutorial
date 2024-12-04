#include <stdio.h>
void palindrome(int n) {
  int reverse = 0, remainder, original = n;

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }
  if (reverse != original) {
    printf("%d is not a palindrome\n", original);
  } else {
    printf("The number %d is a palindrome\n", original);
  }
}

int main(int argc, char *argv[]) {
  // check if a number is a palindrome
  // e.g 16461

  palindrome(16461);

  return 0;
}
