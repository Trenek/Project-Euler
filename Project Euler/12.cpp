#include <cstdio>

int div(int num) {
	int result = 1;
	int i = 1;

	while (i * i <= num) {
		if (num % i == 0) {
			if (i * i == num) {
				result += 1;
			}
			else {
				result += 2;
			}
		}
		i += 1;
	}

	return result;
}

void twelfth(int num) {
	int i = 1;
	int j = 1;
	int divi = 1;
	int divj = 1;
	bool turn = true;
	int k = 0;

	while (div(i * j) < num) {
		if (turn) {
			i += 2;
			turn = false;
		}
		else {
			j += 1;
			turn = true;
		}
	}

	printf("%llu", i * j);
}