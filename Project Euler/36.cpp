#include <cstdio>
#include <cstdlib>

#include "getDigits.h"

#define getDigit(i, j, base) (((i) / (int)pow((base), (j))) % (base))

bool isPalindrom(int i, int base) {
	int digits = getDigits(i, base);
	int j = 0;
	bool result = true;

	while (j < digits) {
		if (getDigit(i, j, base) != getDigit(i, digits - 1, base)) {
			result = false;
		}
		j += 1;
		digits -= 1;
	}

	return result;
}

void thirtySix() {
	int i = 1;
	long long result = 0;

	while (i < 1000000) {
		if (isPalindrom(i, 2)) {
			if (isPalindrom(i, 10)) {
				result += i;
			}
		}
		i += 1;
	}

	printf("%lli", result);
}