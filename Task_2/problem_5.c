/**
 ******************************************************************************
 * @file           : problem_5.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Digit printer using recursion
 * @description    : Prints digits of a number separated by spaces using recursion
 ******************************************************************************
 */

 #include <stdio.h>

 void print_digits(int n) {
     if (n < 10) {
         printf("%d ", n);
         return;
     }
     print_digits(n / 10);
     printf("%d ", n % 10);
 }
 
 int main() {
     int T, N;
     scanf("%d", &T);
     
     while (T--) {
         scanf("%d", &N);
         print_digits(N);
         printf("\n");
     }
     
     return 0;
 }