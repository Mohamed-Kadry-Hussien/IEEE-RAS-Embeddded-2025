/**
 ******************************************************************************
 * @file           : problem_2.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Convert age in days to years, months, and days
 * @description    : This program takes an integer input representing a person's
 *                   age in days and converts it into years, months, and days
 *                   based on the assumption that a year has 365 days and a
 *                   month has 30 days.
 ******************************************************************************
 */

 #include <stdio.h>

 int main() {
     int N;
     scanf("%d", &N);
 
     int years = N / 365;
     int remaining_days = N % 365;
     int months = remaining_days / 30;
     int days = remaining_days % 30;
 
     printf("%d years\n", years);
     printf("%d months\n", months);
     printf("%d days\n", days);
 
     return 0;
 }