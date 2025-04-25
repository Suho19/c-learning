#include <stdio.h>


int main(void) {
	int n_1 = 0, n_2 = 0, n_3 = 0, n_4 = 0;
	int n_5 = 0, n_6 = 0, n_7 = 0, n_8 = 0;
	int n_9 = 0, n_10 = 0, n_11 = 0, n_12 = 0;
	int n_13 = 0, n_14 = 0, n_15 = 0, n_16 = 0;

	printf("Enter numbers from 1-16 in any oder: ");
	scanf("%d %d %d %d", &n_1, &n_2, &n_3, &n_4);
	scanf("%d %d %d %d", &n_5, &n_6, &n_7, &n_8);
	scanf("%d %d %d %d", &n_9, &n_10, &n_11, &n_12);
	scanf("%d %d %d %d", &n_13, &n_14, &n_15, &n_16);


	int row_1 = n_1 + n_2 + n_3 + n_4;
	int row_2 = n_5 + n_6 + n_7 + n_8;
	int row_3 = n_9 + n_10 + n_11 + n_12;
	int row_4 = n_13 + n_14 + n_15 + n_16;

	int col_1 = n_1 + n_5 + n_9 + n_13;
	int col_2 = n_2 + n_6 + n_10 + n_14;
	int col_3 = n_3 + n_7 + n_11 + n_15;
	int col_4 = n_4 + n_8 + n_12 + n_16;

	int r_diagnoal = n_1 + n_6 + n_11 + n_16;
	int l_diagnoal = n_4 + n_7 + n_10 + n_13;

	printf("--------------------\n");
	printf("%d %d %d %d\n", n_1, n_2, n_3, n_4);
	printf("%d %d %d %d\n", n_5, n_6, n_7, n_9);
	printf("%d %d %d %d\n", n_9, n_10, n_11, n_13);
	printf("%d %d %d %d\n", n_13, n_14, n_15, n_16);
	printf("--------------------\n");
	printf("row_1 %d\n", row_1);
	printf("row_2 %d\n", row_2);
	printf("row_3 %d\n", row_3);
	printf("row_4 %d\n", row_4);
	printf("--------------------\n");
	printf("col_1 %d\n", col_1);
	printf("col_2 %d\n", col_2);
	printf("col_3 %d\n", col_3);
	printf("col_4 %d\n", col_4);
	printf("--------------------\n");
	printf("Sum Left Diagnol = %d \n", l_diagnoal);
	printf("Sum Right Diagnol = %d \n", r_diagnoal);

  return 0;
}
