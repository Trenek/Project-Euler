#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// (a + 1)(b + 1)
// ab + a + b + 1

struct Pantagonal {
	int a;
	int b;
	int value;
};

struct Pantagonal setNumber(int a) {
	struct Pantagonal result = {
		.a = a,
		.b = (3 * a) - 1
	};
	
	result.value = (result.a * result.b) >> 1;

	return result;
}

struct Pantagonal nextPantagonal(struct Pantagonal this) {
	struct Pantagonal result = {
		.a = this.a + 1,
		.b = this.b + 3,
		.value = this.value + this.a + ((this.a + this.b + 3) >> 1)
	};

	return result;
}

static bool isPantagonal(int a) {
	struct Pantagonal temp = setNumber(1);
	bool result = false;

	while (temp.value < a) {
		temp = nextPantagonal(temp);
	}

	if (a == temp.value) {
		result = true;
	}

	return result;
}

void fourtyFour(void) {
	struct Pantagonal a = setNumber(2);
	struct Pantagonal b = setNumber(1);

	while (!isPantagonal(a.value + b.value) || !isPantagonal(a.value - b.value)) {
		if (a.a > b.a) {
			b = nextPantagonal(b);
		}
		else {
			a = nextPantagonal(a);
			b = setNumber(1);
		}
	}

	printf("%i", a.value - b.value);
}