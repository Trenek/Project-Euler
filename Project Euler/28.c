#include <stdio.h>

void twentyEight(int howMany) {
	int i = 1;
	int number = 1;
	int sum = 1;

	while (2 * i + 1 <= howMany) {
		number += 5 * i;
		sum += number << 2;
		number += 3 * i;

		i += 1;
	}

	printf("%i", sum);
}

/*
4 x 2 - 3 x 3
4 x 4 - 5 x 5
4 x 6 - 7 x 7
4 x 8 - 9 x 9
...
4 x 2n - 1 + 2n x 1 + 2n
*/
