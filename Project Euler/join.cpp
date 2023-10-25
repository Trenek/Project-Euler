#include <cstdlib>

#include "getDigits.h"

int join(int i, int j) {
	int result = i * pow(10, getDigits(j));

	result += j;

	return result;
}