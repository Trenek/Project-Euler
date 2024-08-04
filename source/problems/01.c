#include <stdio.h>

void one(int cap) {
	int i = 1;
	int result = 0;

	while (i < cap) {
		if (i % 3 == 0) {
			result += i;
		}
		else {
			if (i % 5 == 0) {
				result += i;
			}
		}
		i += 1;
	}

	printf("%i", result);
}