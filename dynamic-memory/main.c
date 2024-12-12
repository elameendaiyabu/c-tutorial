#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
  int n;

  printf("enter size of array: ");
  scanf("%d", &n);

  int *ptr = (int *)malloc(n * sizeof(int));

  if (ptr == NULL) {
    printf("memory allocation unsuccessful");
    return 0;
  } else {
    printf("enter array elements:\n");
    for (int i = 0; i < n; ++i) {
      scanf("%d\n", &ptr[i]);
    }

    for (int i = 0; i < n; ++i) {
      printf("%d ", ptr[i]);
    }
  }

  return 0;
}
