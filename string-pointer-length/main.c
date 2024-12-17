#include <stdio.h>

int pointerLen(char *string) {
  int count;

  while (*string++) {
    printf("%s\n", string);
    count++;
  }

  return count;
}

int main(int argc, char *argv[]) {
  char string[] = "hey";

  printf("%d\n", pointerLen(string));
  return 0;
}
