#include <stdio.h>

int main() {
  double a, b;
  printf("Enter the value in inches: ");
  scanf("%lf", &a);
  b = a * 2.54;
  printf("The value in cm is %lf", b);
  return 0;
}
