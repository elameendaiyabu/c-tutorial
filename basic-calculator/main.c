#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int firstNum;
  int secondNum;
  char operation[1];
  int result;
  bool isRunning = true;

  while (isRunning) {

    printf("Enter first number : ");
    scanf("%d", &firstNum);

    printf("Enter second number : ");
    scanf("%d", &secondNum);

    printf("choose operation (+, -, *, /, or q to quit) : ");
    scanf("%s", operation);

    if (strcmp(operation, "+") == 0) {
      result = firstNum + secondNum;
    } else if (strcmp(operation, "-") == 0) {
      result = firstNum - secondNum;
    } else if (strcmp(operation, "*") == 0) {
      result = firstNum * secondNum;
    } else if (strcmp(operation, "/") == 0) {
      result = firstNum / secondNum;
    } else if (strcmp(operation, "q") == 0) {
      break;
    } else {
      printf("Invalid character");
    }

    printf("%d\n", result);
  }

  return 0;
}
