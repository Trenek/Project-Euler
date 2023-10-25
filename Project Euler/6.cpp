#include <cstdio>

void six(int number) {
	int i = 1;
	int result1 = 0;
	int result2 = 0;

	while (i <= number) {
		result1 += i * i;
		result2 += i;
		i += 1;
	}
	result2 *= result2;

	printf("%i", result2 - result1);
}