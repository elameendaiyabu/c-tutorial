#include <stdio.h>
#define PI 3.14159265358979323846

void calculateCircle(void) {
  // area of cirlce = pi*r*r
  float radius;
  printf("enter the radius of the cirlce: ");
  scanf("%f", &radius);
  printf("Area of circle = %f\n", PI * radius * radius);
}

void calculateRectangle(void) {
  // area of rect = l*b
  float length;
  float breadth;

  printf("enter length of rectangle: ");
  scanf("%f", &length);

  printf("enter breadth of rectangle: ");
  scanf("%f", &breadth);

  printf("Area of rectangle = %f\n", length * breadth);
}

void calculateTriangle(void) {
  // area of triangle = 1/2 *b * h
  float base;
  float height;

  printf("enter base of triangle: ");
  scanf("%f", &base);

  printf("enter height of triangle: ");
  scanf("%f", &height);

  printf("Area of triangle = %f\n", 0.5 * base * height);
}

int main(int argc, char *argv[]) {
  // choose shape to calculate area (circle, rect, triangle)
  // input values
  // calculate area

  int shapeOption;

  printf("choose shape to calculate area\n");
  printf("1. Cirlce\n2. Rectangle\n3. Triangle\n");
  printf("enter option: ");
  scanf("%d", &shapeOption);

  switch (shapeOption) {
  case 1:
    // calculate area of circle
    calculateCircle();
    break;
  case 2:
    // calculate area of rect
    calculateRectangle();
    break;
  case 3:
    // calculate area of trianngle
    calculateTriangle();
    break;
  default:
    printf("Invalid shape option");
  }
  return 0;
}
