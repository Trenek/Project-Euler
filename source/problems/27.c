#include <stdio.h>
#include <stdlib.h>

#include "isPrime.h"

static void update(int* max, int* maxA, int* maxB, int a, int b) {
	int i = 0;
	int number = 0;

	do {
		number = i + a;
		number *= i;
		number += b;
		i += 1;
	} while (isPrime(abs(number)));

	if (i > *max) {
		*max = i;
		*maxA = a;
		*maxB = b;
	}
}

void twentySeven(int number) {
	int a = 0;
	int b = 0;
	int max = 0;
	int maxA = 0;
	int maxB = 0;

	while (a < number) {
		b = 0;
		while (b < number) {
			update(&max, &maxA, &maxB, a, b);
			update(&max, &maxA, &maxB, a, -b);
			update(&max, &maxA, &maxB, -a, b);
			update(&max, &maxA, &maxB, -a, -b);
			b += 1;
		}
		a += 1;
	}

	printf("%i", maxA * maxB);
}