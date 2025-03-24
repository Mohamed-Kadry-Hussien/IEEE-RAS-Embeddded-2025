/**
 ******************************************************************************
 * @file           : problem_7.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Check if sum of digits is prime
 * @description    : This program takes a positive integer, calculates the sum
 *                   of its digits, and determines if this sum is a prime number.
 *                   It uses digit extraction and prime checking functions.
 ******************************************************************************
 */

 #include <stdio.h>
 #include <stdbool.h>
 
 
 bool isPrime(int num) {
     if (num <= 1) return false;
     if (num == 2) return true;
     if (num % 2 == 0) return false;
     
     for (int i = 3; i * i <= num; i += 2) {
         if (num % i == 0)
             return false;
     }
     return true;
 }
 
 
 int sumOfDigits(int num) {
     int sum = 0;
     while (num > 0) {
         sum += num % 10;
         num /= 10;
     }
     return sum;
 }
 
 int main() {
     int number;
     
     printf("Enter a positive integer: ");
     scanf("%d", &number);
     
     if (number <= 0) {
         printf("Please enter a positive integer.\n");
         return 1;
     }
     
     int sum = sumOfDigits(number);
     bool prime = isPrime(sum);
     
     printf("The sum of digits (%d) is %sprime number.\n", 
            sum, prime ? "" : "not ");
     
     return 0;
 }