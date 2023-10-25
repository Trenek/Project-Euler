#include <cstdlib>
#include <iostream>

// (a + 1)(b + 1)
// ab + a + b + 1

class Pantagonal {
public:
	int a;
	int b;
	int value;

	Pantagonal(int a) {
		(*this).a = a;
		(*this).b = (3 * a) - 1;

		(*this).value = ((*this).a * (*this).b) >> 1;
	}

	void setNumber(int a) {
		(*this).a = a;
		(*this).b = (3 * a) - 1;

		(*this).value = ((*this).a * (*this).b) >> 1;
	}

	Pantagonal& operator++() {
		(*this).value += (*this).a + (((*this).a + (*this).b + 3) >> 1);
		(*this).a += 1;
		(*this).b += 3;

		return *this;
	}
};

bool isPantagonal(int a) {
	Pantagonal temp(1);
	bool result = false;

	while (temp.value < a) {
		++temp;
	}

	if (a == temp.value) {
		result = true;
	}

	return result;
}

void fourtyFour() {
	Pantagonal a(2);
	Pantagonal b(1);
	int result = 0;

	while (!isPantagonal(a.value + b.value) || !isPantagonal(a.value - b.value)) {
		if (a.a > b.a) {
			++b;
		}
		else {
			++a;
			b.setNumber(1);
		}
	}

	std::cout << (a.value - b.value);
}