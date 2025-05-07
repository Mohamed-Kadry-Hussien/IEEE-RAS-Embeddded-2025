#include "math_operations.h"
#include <stdio.h>

int add_pair(Pair p) {
    return p.a + p.b;
}

int subtract_pair(Pair p) {
    return p.a - p.b;
}

int multiply_pair(Pair p) {
    return p.a * p.b;
}

float divide_pair(Pair p) {
    if (p.b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)p.a / p.b;
}

int power_pair(Pair p) {
    int result = 1;
    for (int i = 0; i < p.b; i++) {
        result *= p.a;
    }
    return result;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return (float)a / b;
}

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}
