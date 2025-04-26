/* 
 * reverse an inputed number 28 will be 82
*/
#include <stdio.h>

int main(void) {
	int num = 8;
	int reverse = 8;

	printf("Enter two number: ");
	scanf("%d", &num);

	reverse = (num % 10) * 10 + (num / 10);
	printf("Reverse %d is %d\n", num, reverse);

	return 0;
}
