#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static int sum(int a, int power) {
	int result = 0;

	while (a != 0) {
		result += (int)pow(a % 10, power);
		a /= 10;
	}

	return result;
}

void thirty(int number) {
	int a = 2;
	int max = (int)pow(10, number + 1);
	int result = 0;

	while (a < max) {
		if (a == sum(a, number)) {
			result += a;
		}
		a += 1;
	}

	printf("%i", result);
}