#include <cstdio>
#include <cstdlib>

#include "getDigits.h"
#include "join.h"

bool isPandigital(int i) {
	int flag = 0;
	bool result = false;

	while (i != 0) {
		flag |= 1 << ((i % 10) - 1);
		i /= 10;
	}
	if (flag == 0x1FF) {
		result = true;
	}

	return result;
}

void thirtyEight() {
	int i = 9999;
	int multiplayer = 1;
	int number = 0;
	int multed = 0;
	int max = 0;

	while (i > 0) {
		number = i;
		multiplayer = 2;
		while (getDigits(number) < 9) {
			multed = multiplayer * i;
			number = join(number, multed);

			multiplayer += 1;
		}
		if (getDigits(number) == 9) {
			if (isPandigital(number)) {
				if (number > max) {
					max = number;
				}
			}
		}
		i -= 1;
	}

	printf("%i", max);
}