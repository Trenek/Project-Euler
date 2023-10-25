#include <cstdio>

int sum(int number) {
	int i = 2;
	int result = 1;

	while (i * i <= number) {
		if (number % i == 0) {
			if (i * i == number) {
				result += i;
			}
			else {
				result += i;
				result += number / i;
			}
		}
		i += 1;
	}

	return result;
}

void twentyOne(int number) {
	int result = 0;
	int i = number - 1;
	int j = 0;

	while (i > 0) {
#if 1 // lepsze rozwi¹zanie B)
		j = sum(i);
		if (j < number) {
			if (i < j) {
				if (sum(j) == i) {
					result += j + i;
				}
			}
		}
#else // pierwsze rozwi¹zanie
		j = number - 1; 
		while (j > i) {
			if (sum(i) == j) {
				if (sum(j) == i) {
					result += i + j;
				}
			}
			j -= 1;
		}
#endif
		i -= 1;
	}
	
	printf("%i", result);
}