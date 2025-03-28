/**
 ******************************************************************************
 * @file           : problem_3.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Wonderful number checker
 * @description    : Checks if a number is odd and has palindrome binary representation
 ******************************************************************************
 */

 #include <stdio.h>
 #include <stdbool.h>
 
 bool is_odd(int n) {
     return n % 2 != 0;
 }
 
 bool is_binary_palindrome(int n) {
     if (n == 0) return true;
     
     int binary[32];
     int index = 0;
     
     while (n > 0) {
         binary[index++] = n % 2;
         n /= 2;
     }
     
     for (int i = 0; i < index/2; i++) {
         if (binary[i] != binary[index - 1 - i]) {
             return false;
         }
     }
     return true;
 }
 
 int main() {
     int N;
     scanf("%d", &N);
     
     if (is_odd(N) && is_binary_palindrome(N)) {
         printf("YES\n");
     } else {
         printf("NO\n");
     }
     
     return 0;
 }