bool isPrime(unsigned long long int prime) {
	bool result = true;
	unsigned long long int i = 5;

	if (prime != 2) {
		if (prime != 3) {
			result = false;
			if (prime > 1) {
				result = false;
				if (prime % 2 != 0) {
					if (prime % 3 != 0) {
						result = true;
						while (i * i <= prime) {
							if (prime % i == 0) {
								result = false;
								break;
							}
							else {
								if (prime % (i + 2) == 0) {
									result = false;
									break;
								}
							}
							i += 6;
						}
					}
				}
			}
		}
	}

	return result;
}