/**
 ******************************************************************************
 * @file           : problem_8.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : 3n+1 sequence length calculator
 * @description    : Calculates length of Collatz sequence using recursion
 ******************************************************************************
 */

 #include <stdio.h>

 int collatz_length(int n) {
     if (n == 1) return 1;
     if (n % 2 == 0) return 1 + collatz_length(n / 2);
     return 1 + collatz_length(3 * n + 1);
 }
 
 int main() {
     int n;
     scanf("%d", &n);
     printf("%d\n", collatz_length(n));
     return 0;
 }