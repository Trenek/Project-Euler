#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef unsigned long long int Int;

static Int getDegree(Int number) {
    Int i = 2;
    Int j = 0;
    Int result = 1;
    bool condition = i * i <= number;

    while (condition) {
        j = i;
        while (j < number) {
            j *= i;
            result += 1;
        }
        i += 1;

        if (j == number) {
            condition = false;
        }
        else {
            result = 1;
            condition = i * i <= number;
        }
    }

    return result;
}

static Int calculate(Int degree, Int number) { // part of an algorithm that should be faster
    Int i = 2;
    Int j = 1;
    bool is = true;
    Int result = 0;

    while (i <= number) {
        is = true;
        j = 1;
        while (j < degree) {
            if (degree * i % j == 0) {
                if (degree * i <= j * number) {
                    is = false;
                    j = degree;
                }
            }
            j += 1;
        }
        if (is) {
            result += 1;
        }
        i += 1;
    }

    return result;
}

static Int* create(Int number) {
    Int* result;
    Int i = 0;
    Int j = 2;

    while (j <= number) {
        j *= 2;
        i += 1;
    }

    result = malloc(sizeof(Int) * i);

    result[0] = number - 1;
    j = 1;
    while (j < i) {
        result[j] = calculate(j + 1, number);
        j += 1;
    }

    return result;
}

void twentyNine(Int number) {
    Int a = 2;
    Int result = 0;
    Int* elements = create(number); // O(log n) memory and time complexity

    while (a <= number) { // O(n) time complexity
        result += elements[getDegree(a) - 1];
        a += 1;
    }

    printf("%llu", result);
}