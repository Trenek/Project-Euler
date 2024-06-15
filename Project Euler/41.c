#include <stdio.h>
#include <stdlib.h>

#include "isPrime.h"
#include "getDigits.h"
#include "join.h"

static int generateFlag(int digits) {
	int result = 1;

	while (digits > 1) {
		result <<= 1;
		result += 1;

		digits -= 1;
	}

	return result;
}

static bool isPandigital(int i, int digits) {
	int flag = 0;
	bool result = false;

	while (i != 0) {
		flag |= 1 << ((i % 10) - 1);
		i /= 10;
	}

	if (flag == generateFlag(digits)) {
		result = true;
	}

	return result;
}

void fourtyOne(void) {
	int i = 1;
	int max = 0;

	while (i < 10000000) {
		if (isPandigital(i, getDigits(i, 10))) {
			if (isPrime(i)) {
				if (max < i) {
					max = i;
				}
			}
		}
		i += 2;
	}

	printf("%i", max);
}