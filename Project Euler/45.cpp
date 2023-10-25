#include <iostream>

class Traingle {
public:
	long long int a;
	long long int b;
	long long int value;

	Traingle(int a) {
		set(a);
	}

	void set(int a) {
		(*this).a = a;
		(*this).b = a + 1;
		(*this).value = (*this).a * (*this).b / 2;
	}

	void inc() {
		set((*this).a + 1);
	}
};

class Pentagonal {
public:
	long long int a;
	long long int b;
	long long int value;

	Pentagonal(int a) {
		set(a);
	}

	void set(int a) {
		(*this).a = a;
		(*this).b = (3 * a) - 1;
		(*this).value = (*this).a * (*this).b / 2;
	}

	void inc() {
		set((*this).a + 1);
	}
};

class Hexagonal {
public:
	long long int a;
	long long int b;
	long long int value;

	Hexagonal(int a) {
		set(a);
	}

	void set(int a) {
		(*this).a = a;
		(*this).b = (2 * a) - 1;
		(*this).value = (*this).a * (*this).b;
	}

	void inc() {
		set((*this).a + 1);
	}
};

void fourtyFive() {
	Traingle a(285);
	Pentagonal b(165);
	Hexagonal c(143);

	do {
		a.inc();
		while (c.value < a.value) {
			c.inc();
		}

		while (b.value < a.value) {
			b.inc();
		}
	} while (a.value != b.value || a.value != c.value);

	std::cout << a.value;
}