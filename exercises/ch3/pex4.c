#include <stdio.h>

int main(void) {
	int key = 8, part_1 = 8, part_2 = 8;
	printf("Enter a phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &key, &part_1, &part_2);
	printf("You Entered: %d.%d.%d\n", key, part_1, part_2);

}
