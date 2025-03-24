/**
 ******************************************************************************
 * @file           : problem_8.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Check if a number is perfect
 * @description    : This program takes a positive integer and determines if it
 *                   is a perfect number (equal to the sum of its proper divisors
 *                   excluding itself). Uses a while loop and if statements.
 ******************************************************************************
 */

 #include <stdio.h>

 int main() {
     int num, sum = 0, i = 1;
     
     printf("Enter a positive integer: ");
     scanf("%d", &num);
     
     if (num <= 0) {
         printf("Please enter a positive integer.\n");
         return 1;
     }
     
     // Calculate sum of proper divisors
     while (i < num) {
         if (num % i == 0) {
             sum += i;
         }
         i++;
     }
     
     if (sum == num) {
         printf("%d is a perfect number\n", num);
     } else {
         printf("%d is not a perfect number\n", num);
     }
     
     return 0;
 }