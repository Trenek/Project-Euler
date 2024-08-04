#include <stdio.h>

#include "isPrime.h"

void five(int number) {
	int i = 2;
	int result = 1;

	while (i <= number) {
		if (isPrime(i)) {
			int temp = i;
			while (temp * i <= number) {
				temp *= i;
			}
			result *= temp;
		}
		i += 1;
	}

	printf("%i", result);
}