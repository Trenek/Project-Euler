#include <cstdio>

struct date {
	int day;
	int month;
	int year;
};

#define COMPARE(a, b) ((a) == (b) ? 0 : (a) > (b) ? 1 : 2)

int compare(date term1, date term2) {
	int result = 0;

	result = COMPARE(term1.year, term2.year);
	if (result == 0) {
		result = COMPARE(term1.month, term2.month);
		if (result == 0) {
			result = COMPARE(term1.day, term2.day);
		}
	}

	return result;
}

void increase(date* term) {
	switch ((*term).month) {
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			(*term).day += 31;
			break;
		case 3:
		case 5:
		case 8:
		case 10:
			(*term).day += 30;
		case 1:
			(*term).day += 28;
			if ((*term).year % 4 == 0) {
				if ((*term).year % 100 == 0) {
					if ((*term).year % 400 == 0) {
						(*term).day += 1;
					}
				}
				else {
					(*term).day += 1;
				}
			}
			break;
	}
	(*term).day %= 7;

	(*term).month += 1;
	(*term).month %= 12;
	if ((*term).month == 0) {
		(*term).year += 1;
	}
}

void nineteen() {
	date start = { 0, 0, 1901 };
	date end = { 0, 0, 2001 };
	int result = 0;

	while (compare(start, end) == 2) {
		if (start.day == 6) {
			result += 1;
		}
		increase(&start);
	}

	printf("%i", result);
}