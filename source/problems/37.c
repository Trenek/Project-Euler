#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "isPrime.h"
#include "getDigits.h"

static bool isTruncableRL(int i) {
	bool result = true;

	while (i != 0) {
		if (!isPrime(i)) {
			result = false;
		}
		i /= 10;
	}

	return result;
}

#define getDigit(i, j) (((i) / (int)pow((10), (j))) % (10))

static bool isTruncableLR(int i) {
	bool result = true;
	int digit = getDigits(i, 10);

	while (i != 0) {
		if (!isPrime(i)) {
			result = false;
		}
		digit = getDigits(i, 10);
		i -= getDigit(i, digit - 1) * (int)pow(10, digit - 1);
	}

	return result;
}

static bool isTruncable(int i) {
	return isTruncableLR(i) && isTruncableRL(i);
}

void thirtySeven(void) {
	int i = 0;
	int number = 10;
	int result = 0;

	while (i < 11) {
		if (isTruncable(number)) {
			i += 1;
			result += number;
		}
		number += 1;
	}

	printf("%i", result);
}