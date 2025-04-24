#include <stdio.h>

int main(void) {
  float amount = 8;
  printf("Enter a amount: ");
  scanf("%f", &amount);

  float tax = amount * 0.05f;
  float amount_widh_tax = tax + amount;
  printf("Toatal Amount: %-5.2f", amount_widh_tax);
  
}
