#include <cstdio>

int gcd(int a, int b) {
	while (a != 0 && b != 0) {
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}

	return a != 0 ? a : b;
}

int compare(int i, int j, int k, int* numerator) {
	int result = 1;
	int term1 = (10 * j) + i;
	int term2 = (10 * i) + k;
	int igcd = 0;

	if (term1 * k == term2 * j) {
		igcd = gcd(j, k);
		j /= igcd;
		k /= igcd;

		result = j > k ? j : k;
		*numerator *= j < k ? j : k;
	}

	return result;
}

void thirtyThree() {
	int i = 9;
	int j = 9;
	int k = 9;
	int result = 1;
	int numerator = 1;
	int igcd = 1;

	while (i > 0) {
		j = 9;
		while (j > 0) {
			k = 9;
			while (k > j) {
				result *= compare(i, j, k, &numerator);
				k -= 1;
			}
			j -= 1;
		}
		i -= 1;
	}

	igcd = gcd(result, numerator);

	printf("%i", result / igcd);
}