/**
 ******************************************************************************
 * @file           : problem_1.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Divisibility checker
 * @description    : Checks if first number is divisible by second number
 ******************************************************************************
 */

 #include <stdio.h>

 void get_numbers(int *num1, int *num2) {
     printf("Enter first number: ");
     scanf("%d", num1);
     printf("Enter second number: ");
     scanf("%d", num2);
 }
 
 void check_divisibility(int num1, int num2) {
     if(num2 == 0) {
         printf("Cannot divide by zero!\n");
     } else if(num1 % num2 == 0) {
         printf("%d is divisible by %d\n", num1, num2);
     } else {
         printf("%d is not divisible by %d\n", num1, num2);
     }
 }
 
 int main() {
     int num1, num2;
     get_numbers(&num1, &num2);
     check_divisibility(num1, num2);
     return 0;
 }