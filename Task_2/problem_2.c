/**
 ******************************************************************************
 * @file           : problem_2.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Armstrong number finder
 * @description    : Finds all Armstrong numbers in given range
 ******************************************************************************
 */

 #include <stdio.h>
 #include <math.h>  
 
 void get_range(int *lower, int *upper) {
     printf("Enter lower number: ");
     scanf("%d", lower);
     printf("Enter upper number: ");
     scanf("%d", upper);
 }
 
 int count_digits(int number) {
     if(number == 0) return 1;
     int count = 0;
     while(number != 0) {
         number /= 10;
         count++;
     }
     return count;
 }
 
 int is_armstrong(int num) {
     int original = num;
     int sum = 0;
     int digits = count_digits(num);
     
     while(original > 0) {
         int digit = original % 10;
         int power = 1;

         for(int i = 0; i < digits; i++) {
             power *= digit;
         }
         sum += power;
         original /= 10;
     }
     
     return sum == num;
 }
 
 void find_and_print_armstrong(int lower, int upper) {
     printf("Armstrong numbers between %d and %d:\n", lower, upper);
     for(int num = lower; num <= upper; num++) {
         if(is_armstrong(num)) {
             printf("%d\n", num);
         }
     }
 }
 
 int main() {
     int lower, upper;
     get_range(&lower, &upper);
     find_and_print_armstrong(lower, upper);
     return 0;
 }