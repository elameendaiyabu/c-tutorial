#include <stdio.h>
int main(int argc, char *argv[]) {
  // input temp to convert

  int convertType;
  float temp;

  printf("select type of conversion\n1. celsius to farenheit\n2. farenheit to "
         "celsius\n");
  printf("input conversion type: ");
  scanf("%d", &convertType);
  printf("input temperature to convert: ");
  scanf("%f", &temp);

  switch (convertType) {
  case 1:
    // convert c to f
    printf("%f\n", (temp * 9 / 5) + 32);
    break;
  case 2:
    // convert f to c
    printf("%f\n", (temp - 32) * 5 / 9);
    break;
  default:
    printf("invalid convert option");
  }

  return 0;
}
