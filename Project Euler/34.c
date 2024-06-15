#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

static long long factorial(int i) {
	long long result = 1;

	while (i > 0) {
		result *= i;
		i -= 1;
	}

	return result;
}

static bool isCurious(int i) {
	bool result = false;
	int original = i;
	long long final = 0;

	while (original != 0) {
		final += factorial(original % 10);
		original /= 10;
	}

	if (final == i) {
		result = true;
	}

	return result;
}

void thirtyFour(void) {
	int i = 3;
	int result = 0;
	
	while (i < 100000) {
		if (isCurious(i)) {
			result += i;
		}
		i += 1;
	}

	printf("%i", result);
}