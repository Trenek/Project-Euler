#include <cstdio>

#include "isPrime.h"

void ten(int number) {
	unsigned long long int prime = 5;
	int i = 1;
	unsigned long long int result = 5;

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

	printf("%llu", result);
}