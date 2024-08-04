#include <stdio.h>
#include <stdint.h>

static size_t calculate(size_t number) {
	size_t result = 1;

	while (number != 1) {
		if (number % 2 == 0) {
			number /= 2;
		}
		else {
			number *= 3;
			number += 1;
		}

		result += 1;
	}

	return result;
}

void fourteen(void) { // wolniejsze ni¿ mog³oby byæ, za to lepsze pamiêciowo
	size_t i = 1;
	size_t result = 1;
	size_t temp = 0;
	size_t realResult = 0;

	while (i < 1000000) {
		temp = calculate(i);

		if (temp > result) {
			result = temp;
			realResult = i;
		}
		i += 1;
	}

	printf("%zu", realResult);
}