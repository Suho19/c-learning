#include <stdio.h>


int main(void) {
	
	int num1, num2;

	printf("Enter number: ");
	scanf("%1d%1d", &num1, &num2);

	printf("%d%d reverses %d%d\n", num1,num2, num2,num1);

	return 0;

}
