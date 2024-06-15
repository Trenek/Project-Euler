#include <stdio.h>
#include <stdbool.h>

static inline bool checkP(int a, int b, int c) {
	return a * a == b * b + c * c;
}

static int checkSolutions(int p) {
	int a = p;
	int b = 0;
	int c = 0;
	int result = 0;

	while (a > 0) {
		b = 0;
		c = p - a;
		while (a > b && b < c) {
			if (a > c) {
				if (checkP(a, b, c)) {
					result += 1;
				}
			}
			b += 1;
			c -= 1;
		}
		a -= 1;
	}

	return result;
}

void thirtyNine(void) {
	int p = 1000;
	int max = 0;
	int current = 0;
	int result = 0;

	while (p > 0) {
		current = checkSolutions(p);
		if (current > max) {
			max = current;
			result = p;
		}
		p -= 1;
	}

	printf("%i", result);
}