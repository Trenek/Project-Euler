#include <stdio.h>

static void recursive(int* input, int* result, int value) {
	if (value == 0) {
		*result += 1;
	}
	else {
		if (value > 0) {
			recursive(input, result, value - *input);
			if (*input != 1) {
				recursive(input + 1, result, value);
			}
		}
	}
}

void thirtyOne(void) {
	int input[8] = { 200, 100, 50, 20, 10, 5, 2, 1 };
	int result = 0;

	recursive(input, &result, 200);

	printf("%i", result);
}