#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int toNumber(char* name) {
	int result = 0;

	while (*name != 0) {
		result += *name - 'A' + 1;
		name += 1;
	}

	return result;
}

#define MAX 100

void twentyTwo(void) {
	FILE* file = fopen("dane/0022_names.txt", "r");
	char *name = malloc(sizeof(char) * MAX);
	char *temp = malloc(sizeof(char) * MAX);
	char **table = malloc(sizeof(char *) * 50000);
	int length = 0;
	int i = 0;
	long long result = 0;

	(void)fscanf(file, "%[,\"]", name);
	while (fscanf(file, "%[^\"]", name) != EOF) {
		i = 0;
		while (i < length) {
			if (strcmp(table[i], name) > 0) {
				strcpy(temp, name);
				strcpy(name, table[i]);
				strcpy(table[i], temp);
			}
			i += 1;
		}
		table[length] = malloc(sizeof(char) * MAX);
		strcpy(table[length], name);
		length += 1;

		(void)fscanf(file, "%[,\"]", name);
	}
	
	i = 0;
	while (i < length) {
		result += toNumber(table[i]) * (i + 1);
		i += 1;
	}

	free(name);
	free(temp);
	free(table);
	fclose(file);

	printf("%lli", result);
}