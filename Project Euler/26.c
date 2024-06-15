#include <stdio.h>

#include "isPrime.h"

void twentySix(int number) {
	int i = 1;
	int r = 1;
	int temp = 0;
	int j = 0;
	int max = 0;

	while (i < number) {
		if (isPrime(i)) {
			r = 1;
			temp = 0;
			do {
				r *= 10;
				r %= i;
				temp += 1;
			} while (r > 1);
			if (temp > max) {
				max = temp;
				j = i;
			}
		}

		i += 1;
	}

	printf("%i", j);
}