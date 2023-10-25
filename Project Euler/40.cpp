#include <cstdio>
#include <cstdlib>

#include "getDigits.h"

int getDigit(int i) {
	int j = 1;
	int digit = 0;

	while (i > 1) {
		digit = getDigits(j);
		if (i > digit) {
			i -= digit;
			j += 1;
		}
		else {
			while (i > 1) {
				j -= (j / (int)pow(10, digit - 1)) * (int)pow(10, digit - 1);
				digit -= 1;
				i -= 1;
			}
		}
	}

	digit = getDigits(j);
	return j / pow(10, digit - 1);
}

void fourty() {
	printf("%i", getDigit(1) * getDigit(10) * getDigit(100) * getDigit(1000) * getDigit(10000) * getDigit(100000) * getDigit(1000000));
}