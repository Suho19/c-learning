#include <stdio.h>

int main(void) {
	int n_items = 8, month = 8, day = 8, year = 8;
	float price = 8.0f;

	printf("Enter item number: ");
	scanf("%d", &n_items);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%6.2f\t\t%d/%d/%d\n", n_items, price, month, day, year);
	return 0;
}
