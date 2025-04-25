#include <stdio.h>


int main(void) {
  int month, day, year;
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You Entered the date: %d%d%d\n", month, day, year);
}
