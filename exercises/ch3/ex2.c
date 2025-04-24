#include <stdio.h>

int main(void) {
  float x = 100.55f;

  printf("%-8.1f\n", x);
  printf("%10.6e\n", x);
  printf("%-8.6f\n", x);
  printf("%6.0f\n", x);

  return 0;
}
