#include <cstdio>

unsigned long long int choose(int n, int k) {
	unsigned long long int result = 1;
	int i = 1;

	while (i <= k) {
		result *= (n + 1 - i) / i;
		i += 1;
	}

	return result;
}

int numberOfRoots(int a, int b) {
	int result = 0;

	if (a == 0) {
		result = 1;
	}
	else {
		if (b == 0) {
			result = 1;
		}
		else {
			if (a == b) {
				result += 2 * numberOfRoots(a - 1, b);
			}
			else {
				result += numberOfRoots(a - 1, b);
				result += numberOfRoots(a, b - 1);
			}
		}
	}

	return result;
}

void fifteen(int number) {
	unsigned long long int result[21][21];
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

	printf("%llu", result[number][number]);
}

void fifteen(int numberW, int numberH) {
	printf("%llu", choose(numberW + numberH, numberH));
}