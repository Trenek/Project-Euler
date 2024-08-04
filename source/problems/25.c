#include <stdio.h>
#include <string.h>

#define MAX 1001

static void arrayCopy(int* Destination, int* Source, int length) {
	int i = 0;

	while (i < length) {
		Destination[i] = Source[i];
		i += 1;
	}
}

void twentyFive(int number) {
	int a[MAX] = { 0 };
	int b[MAX] = { 0 };
	int c[MAX] = { 0 };
	int lengthA = 1;
	int lengthC = 1;
	int i = 0;
	int rest = 0;
	int result = 1;

	memset(a, 0, MAX * sizeof(int));
	memset(b, 0, MAX * sizeof(int));
	memset(c, 0, MAX * sizeof(int));

	a[0] = 1;
	while (lengthA < number) {
		arrayCopy(c, a, lengthA);
		lengthC = lengthA;
		i = 0;
		while (i < lengthA) {
			rest += a[i] + b[i];
			a[i] = rest % 10;
			rest /= 10;
			i += 1;
		}
		while (rest != 0) {
			a[lengthA] = rest % 10;
			rest /= 10;
			lengthA += 1;
		}
		arrayCopy(b, c, lengthC);
		result += 1;
	}

	printf("%i", result);
}