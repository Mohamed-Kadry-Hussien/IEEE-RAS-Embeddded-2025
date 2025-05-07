#include <stdio.h>
#include "math_operations.h"
#include "math_operations.c"

int main() {
    Pair nums = {5, 3};

    printf("Using structure-based functions:\n");
    printf("Addition: %d\n", add_pair(nums));
    printf("Subtraction: %d\n", subtract_pair(nums));
    printf("Multiplication: %d\n", multiply_pair(nums));
    printf("Division: %.2f\n", divide_pair(nums));
    printf("Power: %d\n", power_pair(nums));

    printf("\nUsing standard parameter functions:\n");
    printf("Addition: %d\n", add(nums.a, nums.b));
    printf("Subtraction: %d\n", subtract(nums.a, nums.b));
    printf("Multiplication: %d\n", multiply(nums.a, nums.b));
    printf("Division: %.2f\n", divide(nums.a, nums.b));
    printf("Power: %d\n", power(nums.a, nums.b));

    Pair zero_div = {5, 0};
    printf("\nTesting division by zero:\n");
    printf("Structure division: %.2f\n", divide_pair(zero_div));
    printf("Standard division: %.2f\n", divide(zero_div.a, zero_div.b));

    return 0;
}
