#include <stdio.h>


int main(void) {
  int gs1 = 8, g_publisher = 8, publisher_c = 8, item_n = 8, check_d = 3;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &g_publisher, &publisher_c, &item_n, &check_d);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group Identifier: %d\n", g_publisher);
	printf("Publisher code: %d\n", publisher_c);
	printf("Item Number: %d\n", item_n);
	printf("check Digit: %d\n", check_d);
  return 0;
}
