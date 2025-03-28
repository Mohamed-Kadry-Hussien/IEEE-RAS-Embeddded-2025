/**
 ******************************************************************************
 * @file           : problem_4.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Number printer using recursion
 * @description    : Prints numbers from 1 to N using recursive approach
 ******************************************************************************
 */

 #include <stdio.h>

 void print_numbers(int current, int N) {
     if (current > N) {
         return;
     }
     printf("%d\n", current);
     print_numbers(current + 1, N);
 }
 
 int main() {
     int N;
     scanf("%d", &N);
     print_numbers(1, N);
     return 0;
 }