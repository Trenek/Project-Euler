#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "getDigits.h"
#include "join.h"

static bool isPandigital(int i) {
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

void thirtyEight(void) {
	int number = 9'487;
	int tempNumber = 0;
	int multiplayer = 1;
	int max = 0;

	while (number > 0) {
		tempNumber = number;
		multiplayer = 2;
		while (getDigits(tempNumber, 10) < 9) {
			tempNumber = join(tempNumber, multiplayer * number);

			multiplayer += 1;
		}
		if (getDigits(tempNumber, 10) == 9) {
			if (isPandigital(tempNumber)) {
				if (tempNumber > max) {
					max = tempNumber;
				}
			}
		}

		number -= 1;
	}

	printf("%i", max);
}