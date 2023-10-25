#include <cstdio>
#include <cstring>

int charToInt(char* ciag) {
	int result = 0;

	while (*ciag != 0) {
		result += *ciag - 'A' + 1;
		ciag += 1;
	}

	return result;
}

bool isTriangular(int number) {
	int i = 0;
	bool result = false;

	number *= 2;

	while (i * i < number) {
		if (number == i * (i + 1)) {
			result = true;
		}
		i += 1;
	}

	return result;
}

void fourtyTwo() {
	FILE* file = fopen("dane/0042_words.txt", "r");
	char* world = new char[100];
	int result = 0;

	memset(world, 0, sizeof(char));

	(void)fscanf(file, "%[,\"]", world);
	while (fscanf(file, "%[^\"]", world) != EOF) {
		if (isTriangular(charToInt(world))) {
			result += 1;
		}
		(void)fscanf(file, "%[\",]", world);
	}

	printf("%i", result);

	fclose(file);
}