#include <stdio.h>


const float PI = 3.1419f;

int main(void) {
  float radius = 10.0f * 10.0f;
  float volume = 4.0f / 3.0f * PI * radius;
  printf("volume:%10.2f", volume);
  return 0;
}
