#include <cstdio>

void three(long long number) {
	long long max = 0;
	long long i = 1;

	while (i <= number) {
		if (number % i == 0) {
			if (max < i) {
				max = i;
			}
			number /= i;
			i = 1;
		}
		i += 1;
	}

	printf("%lli", (max == 1 ? number : max));
}
