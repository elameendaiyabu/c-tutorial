#include <stdio.h>
int main(int argc, char *argv[]) {
  // swap using temp var
  // swap without using temp

  int a = 5;
  int b = 8;

  a = a + b; // 13
  b = a - b; // 5
  a = a - b; // 8

  printf("var a = %d (original is 5)\n", a);
  printf("var b = %d (original is 8)\n", b);
  return 0;
}
