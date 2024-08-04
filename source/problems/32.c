#include <stdio.h>
#include <stdbool.h>

static void doFlag(int number, int* flag, int* length) {
	while (number != 0) {
		*flag |= (1 << ((number % 10) - 1));
		number /= 10;
		*length += 1;
	}
}

static bool check(int number) {
	int i = 2;
	int flag = 0;
	bool result = false;
	int length = 0;

	while (i * i < number && !result) {
		if (number % i == 0) {
			flag = 0;
			length = 0;
			doFlag(i, &flag, &length);
			doFlag(number / i, &flag, &length);
			doFlag(number, &flag, &length);
			if (flag == 0x01FF) {
				if (length == 9) {
					result = true;
				}
			}
		}
		i += 1;
	}

	return result;
}

void thirtyTwo(void) {
	int a = 1000;
	int result = 0;

	while (a < 9999) {
		if (check(a)) {
			result += a;
		}
		a += 1;
	}

	printf("%i", result);
}