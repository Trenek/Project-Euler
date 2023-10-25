#include <cstdio>

void nine() {
	int a = 0;
	int b = 0;
	int c = 999;

	while ((a * a) + (b * b) != (c * c)) {
		if (a >= b) {
			c -= 1;
			b = 999 - c;
			a = 1;
		}
		else {
			b -= 1;
			a += 1;
		}
	}

	printf("%i", a * b * c);
}