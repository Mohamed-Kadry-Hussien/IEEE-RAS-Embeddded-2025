/**
 ******************************************************************************
 * @file           : problem_6.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Fibonacci number calculator
 * @description    : Calculates the Nth Fibonacci number using recursion
 ******************************************************************************
 */

 #include <stdio.h>

 int fibonacci(int n) {
     if (n == 1) return 0;
     if (n == 2) return 1;
     return fibonacci(n - 1) + fibonacci(n - 2);
 }
 
 int main() {
     int N;
     scanf("%d", &N);
     printf("%d\n", fibonacci(N));
     return 0;
 }