#include <cstdio>
#include <cstring>

void rekur(bool* free, int* permu, int* number, int left) {
	int i = 0;
	int j = 0;

	if (*number > 0) {
		if (left == 0) {
			*number -= 1;
		}
		while (i < left) {
			while (free[j] == false) {
				j += 1;
			}
			free[j] = false;
			permu[10 - left] = j;
			rekur(free, permu, number, left - 1);
			free[j] = true;
			if (*number == 0) {
				i = left;
			}

			j += 1;
			i += 1;
		}
	}
}

void twentyFour(int number) { // ³atwo zrobiæ szybciej kropka
	bool free[10] = { };
	int permutacja[10] = { };
	int i = 0;

	memset(free, true, sizeof(bool) * 10);
	rekur(free, permutacja, &number, 10);

	while (i < 10) {
		printf("%i", permutacja[i]);
		i += 1;
	}
}