#include <stdio.h>

void twenty(int number) {
	int i = 1;
	int result[200] = { 0 };
	int length = 1;
	int rest = 0;
	int j = 0;

	result[0] = 1;
	while (i <= number) {
		j = 0;
		while (j < length) {
			rest += result[j] * i;
			result[j] = rest % 10;
			rest /= 10;
			j += 1;
		}
		while (rest != 0) {
			result[length] = rest % 10;
			rest /= 10;
			length += 1;
		}
		i += 1;
	}

	i = 0;
	while (i < length) {
		rest += result[i];
		i += 1;
	}

	printf("%i", rest);
}