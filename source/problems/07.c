#include <stdio.h>

#include "isPrime.h"

void seven(int number) {
	int prime = 3;
	int i = 2;

	while (i < number) {
		do {
			prime += 2;
		} while (!isPrime(prime));
		i += 1;
	}

	printf("%i", prime);
}