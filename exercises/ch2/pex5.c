#include <stdio.h>
#include <math.h>

int main(void) {
  float x = 8.0f; // defualt value
  printf("Enter the value of x: "); // prompt the user
  scanf("%f", &x);
  float b_equation = 3 * pow(x, 5) + 2 * pow(x, 4) +
    5 * pow(x, 3) + pow(x, 2) + 7 * x - 6 ;
  printf("3x^5 + 2x^4 + 5x ^3 + x^2 + 7x - 6 = %.2f\n", b_equation); // final solution

  return 0;
}
