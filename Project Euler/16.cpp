#include <cstdio>

void sixteen(int number) {
	int a[1000];
	int i = 0;
	int j = 0;
	int rest = 0;
	int length = 1;
	int result = 0;

	a[0] = 1;

	while (i < number) {
		j = 0;
		while (j < length) {
			rest += a[j] * 2;
			a[j] = rest % 10;
			rest /= 10;
			j += 1;
		}
		while (rest != 0) {
			a[length] = rest % 10;
			rest /= 10;
			length += 1;
		}
		i += 1;
	}
	i = 0;
	while (i < length) {
		result += a[i];
		i += 1;
	}

	printf("%i", result);
}