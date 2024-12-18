#include <stdio.h>
struct Student {
  char name[10];
  int rollNumber;
  int marks[10];
};

int averageMark(int marks[]){
    int average, total = 0;

    for (int i =0; i < 10; i++) {
        total += marks[i];
    }

    average = total/10;

    return average;
}

int main(int argc, char *argv[]) {
  // struct to store name, roll no, and marks.
  // find average of marks

  struct Student student1 = {
      "luffy", 001, {3,3,3,3,3,3,3,3,3,3}
    };

    printf("Name => %s\n", student1.name);
    printf("Roll Number => %d\n", student1.rollNumber);
    printf("Average Mark => %d\n", averageMark(student1.marks));

  return 0;
}
