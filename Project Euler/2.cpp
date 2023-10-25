#include <cstdio>

void two(int cap) {
	int a = 0;
	int b = 1;
	int result = 0;

	while (b < cap) {
		b = b + a;
		a = b - a;
		if (b % 2 == 0) {
			result += b;
		}
	}

	printf("%i", result);
}