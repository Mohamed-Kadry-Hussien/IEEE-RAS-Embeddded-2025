#ifndef MATH_OPERATIONS_H
#define MATH_OPERATIONS_H

typedef struct {
    int a;
    int b;
} Pair;

int add_pair(Pair p);
int subtract_pair(Pair p);
int multiply_pair(Pair p);
float divide_pair(Pair p);
int power_pair(Pair p);

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int power(int base, int exponent);

#endif
