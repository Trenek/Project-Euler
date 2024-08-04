#include <stdio.h>
#include <stdint.h>

#include "isPrime.h"

void ten(size_t number) {
	size_t prime = 5;
	size_t result = 5;

	while (prime < number) {
		if (isPrime(prime)) {
			result += prime;
		}
		prime += 2;
		if (prime < number) {
			if (isPrime(prime)) {
				result += prime;
			}
		}
		prime += 4;
	}

	printf("%zu", result);
}