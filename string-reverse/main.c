#include <stdio.h>
#include <string.h>
void reverse(char word[]) {
  int length = strlen(word);
  char reversed[length];
  for (int i = 1; i <= length; i++) {
    strncat(reversed, &word[length - i], 1);
  }
  printf("original => %s\n", word);
  printf("reversed => %s\n", reversed);
}

int main(int argc, char *argv[]) {
  // string as input and reverse it then compare with original

  reverse("hello if"); // should output tab
  return 0;
}
