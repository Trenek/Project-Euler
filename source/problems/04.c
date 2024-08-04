#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define getDigit(value, number) (((value) / (int)(pow(10, number))) % 10)

static bool isValid(int value, int digit) {
	bool result = true;
	int i = 0;

	while (i < digit) {
		if (getDigit(value, i) != getDigit(value, (2 * digit) - 1 - i)) {
			result = false;
		}
		i += 1;
	}

	return result;
}

void four(int digit) {
	const int lowest = (int)pow(10, digit - 1);
	const int largest = lowest * 10;

	int i = largest;
	int j = lowest;
	int max = 0;

	while (i > lowest) {
		j = largest;
		while (j > i) {
			if (isValid(i * j, digit)) {
				if (i * j > max) {
					max = i * j;
				}
				j = lowest;
			}
			j -= 1;
		}
		i -= 1;
	}

	printf("%i", max);
}