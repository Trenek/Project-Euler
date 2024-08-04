#include <stdio.h>

void fifteen(int number) {
	size_t result[21][21];
	int i = 1;
	int j = 0;

	result[0][0] = 0;

	while (i <= number) {
		j = 0;
		while (j <= i) {
			if (j == 0) {
				result[i][j] = 1;
				result[j][i] = 1;
			}
			else {
				result[i][j] = result[i - 1][j] + result[i][j - 1];
				result[j][i] = result[i][j];
			}
			j += 1;
		}
		i += 1;
	}

	printf("%zu", result[number][number]);
}