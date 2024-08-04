#include <stdlib.h>
#include <math.h>

#include "getDigits.h"

int join(int i, int j) {
	int result = i * (int)pow(10, getDigits(j, 10));

	result += j;

	return result;
}