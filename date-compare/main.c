#include <stdio.h>
struct Day {
  int day;
  int month;
  int year;
};

struct Dates {
  struct Day date1;
  struct Day date2;
};

void findOlder(struct Day date1, struct Day date2) {
  if (date1.year > date2.year) {
    printf("The second date is older => %d/%d/%d\n", date2.day, date2.month, date2.year);
  } else if (date1.year < date2.year) {
    printf("The first date is older => %d/%d/%d\n", date1.day, date1.month, date1.year);
  } else {

    if (date1.month > date2.month) {
      printf("The second date is older => %d/%d/%d\n", date2.day, date2.month, date2.year);
    } else if (date1.month < date2.month) {
      printf("The first date is older => %d/%d/%d\n", date1.day, date1.month, date1.year);
    } else {

      if (date1.day > date2.day) {
        printf("The second date is older => %d/%d/%d\n", date2.day, date2.month, date2.year);
      } else {
        printf("The first date is older => %d/%d/%d\n", date1.day, date1.month, date1.year);
      }
    }
  }
}

int main(int argc, char *argv[]) {
  // compare 2 dates using structs

  struct Dates date;

  date.date1.year = 2024;
  date.date1.month = 5;
  date.date1.day = 21;

  date.date2.year = 2024;
  date.date2.month = 5;
  date.date2.day = 23;

  findOlder(date.date1, date.date2);

  return 0;
}
