int getDigits(int i, int base) {
	int result = 0;

	while (i != 0) {
		i /= base;
		result += 1;
	}

	return result;
}