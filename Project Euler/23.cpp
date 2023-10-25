#include <cstdio>

bool isAbundant(int number) {
	int i = 2;
	int result = 1;
	bool retresult = false;

	while (i * i <= number) {
		if (number % i == 0) {
			if (i * i == number) {
				result += i;
			}
			else {
				result += i;
				result += number / i;
			}
		}
		i += 1;
	}

	if (result > number) {
		retresult = true;
	}

	return retresult;
}

bool isGood(int number) {
	bool result = false;
	int i = 1;

	while (i <= number / 2) {
		if (isAbundant(i)) {
			if (isAbundant(number - i)) {
				result = true;
				i = number / 2;
			}
		}
		i += 1;
	}

	return result;
}

void twentyThree(int number) { // da siê szybciej, ale potrzeba pamiêci
	int i = 0;
	int result = 0;

	while (i <= number) {
		if (!isGood(i + 1)) {
			result += i + 1;
		}
		i += 1;
	}

	printf("%i", result);
}