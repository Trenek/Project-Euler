#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "getDigits.h"

static int getDigit(int i) {
	int j = 1;
	int digit = 0;

	while (i > 1) {
		digit = getDigits(j, 10);
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

	digit = getDigits(j, 10);
	return (int)(j / pow(10, digit - 1));
}

void fourty(void) {
	printf("%i", getDigit(1) * getDigit(10) * getDigit(100) * getDigit(1000) * getDigit(10000) * getDigit(100000) * getDigit(1000000));
}