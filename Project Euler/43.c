#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define GetNumber(x, y) (((x) / power[y]) % 1000)

static bool isPandigital(long long number) {
	int flag = 0;
	bool result = false;

	while (number > 0) {
		flag |= 1 << (number % 10);
		number /= 10;
	}

	if (flag == 0x3ff) {
		result = true;
	}

	return result;
}

void fourtyThree(void) {
	long long number = 0;
	long long result = 0;
	long long power[11];
	int prime[10];
	int which = 0;
	bool good = false;

	while (number < 11) {
		power[number] = (long long)pow(10, (double)number);
		number += 1;
	}

	prime[6] = 2;
	prime[5] = 3;
	prime[4] = 5;
	prime[3] = 7;
	prime[2] = 11;
	prime[1] = 13;
	prime[0] = 17;

	number = power[9];
	while (number < power[10]) {
		which = 6;
		good = true;

		while (which >= 0 && good == true) {
			if (GetNumber(number, which) % prime[which] != 0) {
				good = false;
			}
			which -= 1;
		}

		if (good) {
			if (isPandigital(number)) {
				result += number;
			}
		}
		number += power[which + 1];
	}

	printf("%lli", result);
}