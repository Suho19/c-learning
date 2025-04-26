/* 
 * reverse an inputed number 281 will be 182
*/
#include <stdio.h>

int main(void) {
	int num = 8;
	int reverse = 8;

	printf("Enter two number: ");
	scanf("%3d", &num);

	reverse = (num % 10) * 100 + (num / 10 % 10) * 10 + (num / 100);
	printf("Reverse %d is %d\n", num, reverse);

	return 0;
}
