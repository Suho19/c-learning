
// Name: dweight2.c
// Purpose: Computes the dimensional weight of a 12" x 10" x 8" box 
#include <stdio.h>

int main(void) {
	int height, length, width, volume, weight;
	printf("Enter the height: ");
	scanf("%d", &height);
	printf("Enter the width: ");
	scanf("%d", &width);
	printf("Enter the length: ");
	scanf("%d", &length);

	volume = height * length * width;
	weight = (volume + 165) / 166;

	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);
	return 0;
}
