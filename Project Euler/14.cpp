#include <cstdio>

unsigned long long int calculate(unsigned long long int number) {
	unsigned long long int result = 1;

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

void fourteen() { // wolniejsze ni¿ mog³oby byæ, za to lepsze pamiêciowo
	unsigned long long int i = 1;
	unsigned long long int result = 1;
	unsigned long long int temp;
	unsigned long long int realResult = 0;

	while (i < 1000000) {
		temp = calculate(i);

		if (temp > result) {
			result = temp;
			realResult = i;
		}
		i += 1;
	}

	printf("%llu", result);
}