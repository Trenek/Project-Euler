#include <stdio.h>

struct Figure {
	long long int a;
	long long int b;
	long long int value;
};

struct Figure setTriangle(long long a) {
	struct Figure result = {
		.a = a,
		.b = a + 1
	};

	result.value = result.a * result.b / 2;

	return result;
}

struct Figure setPentagonal(long long a) {
	struct Figure result = {
		.a = a,
		.b = (3 * a) - 1
	};

	result.value = result.a * result.b / 2;

	return result;
}

struct Figure setHexagonal(long long a) {
	struct Figure result = {
		.a = a,
		.b = (2 * a) - 1
	};

	result.value = result.a * result.b;

	return result;
}

void fourtyFive(void) {
	struct Figure a = setTriangle(285);
	struct Figure b = setPentagonal(165);
	struct Figure c = setHexagonal(143);

	do {
		a = setTriangle(a.a + 1);
		while (c.value < a.value) {
			c = setHexagonal(c.a + 1);
		}

		while (b.value < a.value) {
			b = setPentagonal(b.a + 1);
		}
	} while (a.value != b.value || a.value != c.value);
	
	printf("%llu", a.value);
}