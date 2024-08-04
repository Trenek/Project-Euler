#include <stdio.h>

#define ONE 3//one 3
#define TWO 3//two 3
#define THREE 5//three 5
#define FOUR 4//four 4
#define FIVE 4//five 4
#define SIX 3//six 3
#define SEVEN 5//seven 5
#define EIGHT 5//eight 5
#define NINE 4//nine 4
#define TEN 3//ten 3
#define ELEVEN 6//eleven 6
#define TWELVE 6//twelve 6
#define THIRTEEN 8//thirteen 8
#define FOURTEEN 8//fourteen 8
#define FIFTEEN 7//fifteen 7
#define SIXTEEN 7//sixteen 7
#define SEVENTEEN 9//seventeen 9
#define EIGHTEEN 8//eighteen 8
#define NINETEEN 8//nineteen 8
#define TWENTY 6//twenty 6
#define THIRTY 6
#define FORTY 5
#define FIFTY 5
#define SIXTY 5
#define SEVENTY 7
#define EIGHTY 6
#define NINETY 6
#define HUNDRED 7
#define AND 3

#define CHOOSE(x, y) case (x): result = (y); break

static int first(int number) {
	int result = 0;

	switch (number % 10) {
		CHOOSE(1, ONE);
		CHOOSE(2, TWO);
		CHOOSE(3, THREE);
		CHOOSE(4, FOUR);
		CHOOSE(5, FIVE);
		CHOOSE(6, SIX);
		CHOOSE(7, SEVEN);
		CHOOSE(8, EIGHT);
		CHOOSE(9, NINE);
	}

	return result;
}

static int tenfirst(int number) {
	int result = 0;

	switch (number % 10) {
		CHOOSE(0, TEN);
		CHOOSE(1, ELEVEN);
		CHOOSE(2, TWELVE);
		CHOOSE(3, THIRTEEN);
		CHOOSE(4, FOURTEEN);
		CHOOSE(5, FIFTEEN);
		CHOOSE(6, SIXTEEN);
		CHOOSE(7, SEVENTEEN);
		CHOOSE(8, EIGHTEEN);
		CHOOSE(9, NINETEEN);
	}

	return result;
}

static int second(int number) {
	int result = 0;

	switch ((number / 10) % 10) {
		case 0:
			result = first(number);
			break;
		case 1:
			result = tenfirst(number);
			break;
		case 2:
			result = TWENTY + first(number);
			break;
		case 3:
			result = THIRTY + first(number);
			break;
		case 4:
			result = FORTY + first(number);
			break;
		case 5:
			result = FIFTY + first(number);
			break;
		case 6:
			result = SIXTY + first(number);
			break;
		case 7:
			result = SEVENTY + first(number);
			break;
		case 8:
			result = EIGHTY + first(number);
			break;
		case 9:
			result = NINETY + first(number);
			break;
	}

	return result;
}

static int third(int number) {
	int result = second(number);

	if (result != 0) {
		result += AND;
	}

	switch ((number / 100) % 10) {
		case 0:
			result -= AND;
			break;
		case 1:
			result += ONE + HUNDRED;
			break;
		case 2:
			result += TWO + HUNDRED;
			break;
		case 3:
			result += THREE + HUNDRED;
			break;
		case 4:
			result += FOUR + HUNDRED;
			break;
		case 5:
			result += FIVE + HUNDRED;
			break;
		case 6:
			result += SIX + HUNDRED;
			break;
		case 7:
			result += SEVEN + HUNDRED;
			break;
		case 8:
			result += EIGHT + HUNDRED;
			break;
		case 9:
			result += NINE + HUNDRED;
			break;
	}

	return result;
}

void seventeen(int number) {
	int i = 1;
	int result = 11; // 11

	while (i < number) {
		result += third(i);
		i += 1;
	}

	printf("%i", result);
}