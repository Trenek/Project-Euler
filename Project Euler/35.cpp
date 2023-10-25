#include <cstdio>
#include <cstdlib>

#include "isPrime.h"
#include "getDigits.h"

int next(int i, int digits) {
	int placeholder = i % 10;

	i /= 10;
	i += placeholder * pow(10, digits - 1);

	return i;
}

void thirtyFive() {
	int i = 2;
	int digits = 0;
	int result = 0;
	int j = 0;
	bool is = true;
	int toCheck = 0;

	while (i < 1000000) {
		digits = getDigits(i);
		j = 0;
		is = true;
		toCheck = i;
		while (j < digits) {
			if (!isPrime(toCheck)) {
				is = false;
			}
			toCheck = next(toCheck, digits);
			j += 1;
		}
		if (is) {
			result += 1;
		}
		i += 1;
	}

	printf("%i", result);
}