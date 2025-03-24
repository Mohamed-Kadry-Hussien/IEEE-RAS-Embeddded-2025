/**
 ******************************************************************************
 * @file           : problem_3.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Find the last two digits of the product of four numbers
 * @description    : This program takes four integers as input and calculates
 *                   the last two digits of their product using modular
 *                   arithmetic to avoid overflow. The result is printed with
 *                   leading zeros if necessary.
 ******************************************************************************
 */

 #include <stdio.h>

 int main() {
     long long A, B, C, D;
     
     scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
 
     // Initialize the product to 1
     long long product = 1;
     // Multiply each number and take modulo 100 at each step to keep only the last two digits
     product = (product * A) % 100;
     product = (product * B) % 100;
     product = (product * C) % 100;
     product = (product * D) % 100;
 
     
     printf("%02lld\n", product);
 
     return 0;
 }