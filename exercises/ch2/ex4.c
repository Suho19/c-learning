#include <stdio.h>


int main(void) {
  // uninitialized varaibles
  int var1;
  float var2;
  float var3;
  int var4;
  char var5;

  // consistant random number
  printf("%d\n", var1);
  printf("%f\n", var2); // -0.00000
  printf("%f\n", var3); // 0.00000
  printf("%d\n", var4);
  printf("%c\n", var5); // random character
}
