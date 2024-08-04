#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "problems.h"

#define NR(x, y) case (x): y; break

void euler(int problem) {
	struct timespec start = { 0 };
	struct timespec end = { 0 };
	struct timespec difference = { 0 };

	printf("\nproblem %i\n", problem);

	timespec_get(&start, TIME_UTC);
	switch (problem) {
		NR(1, one(1000));
		NR(2, two(4000000));
		NR(3, three(600851475143));
		NR(4, four(3));
		NR(5, five(20));
		NR(6, six(100));
		NR(7, seven(10001));
		NR(8, eight(13));
		NR(9, nine());
		NR(10, ten(2000000));
		NR(11, eleven());
		NR(12, twelfth(500));
		NR(13, thirteen());
		NR(14, fourteen());
		NR(15, fifteen(20));
		NR(16, sixteen(1000));
		NR(17, seventeen(1000));
		NR(18, eighteen());
		NR(19, nineteen());
		NR(20, twenty(100));
		NR(21, twentyOne(10000));
		NR(22, twentyTwo());
		NR(23, twentyThree(28124));
		NR(24, twentyFour(1000000));
		NR(25, twentyFive(1000));
		NR(26, twentySix(1000));
		NR(27, twentySeven(1000));
		NR(28, twentyEight(1001));
		NR(29, twentyNine(100));
		NR(30, thirty(5));
		NR(31, thirtyOne());
		NR(32, thirtyTwo());
		NR(33, thirtyThree());
		NR(34, thirtyFour());
		NR(35, thirtyFive());
		NR(36, thirtySix());
		NR(37, thirtySeven());
		NR(38, thirtyEight());
		NR(39, thirtyNine());
		NR(40, fourty());
		NR(41, fourtyOne());
		NR(42, fourtyTwo());
		NR(43, fourtyThree());
		NR(44, fourtyFour());
		NR(45, fourtyFive());
		NR(46, fourtySix());
		default:
			printf("Problem doesn't exits");
	}
	timespec_get(&end, TIME_UTC);

	difference = (struct timespec){
		.tv_sec = end.tv_sec - start.tv_sec,
		.tv_nsec = end.tv_nsec - start.tv_nsec
	};

	printf("\nTIME: %lf\n", difference.tv_sec + difference.tv_nsec / 1000000000.0);
}

int main(int argc, char *argv[]) {
	int i = 1;
	
	if (argc > 1) {
		while (i < argc) {
			euler(atoi(argv[i]));
			
			i += 1;
		}
	}
	else {
		printf("indended use: %s <problem number>", argv[0]);
	}
}