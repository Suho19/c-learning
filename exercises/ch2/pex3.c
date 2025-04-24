#include <stdio.h>


const float PI = 3.1419f;

int main(void) {
  float radius = 0;
  printf("Enter a radius: ");
  scanf("%f",&radius);
  radius *= radius;
  float volume = 4.0f / 3.0f * PI * radius;
  printf("volume:%10.2f", volume);
  return 0;
}
