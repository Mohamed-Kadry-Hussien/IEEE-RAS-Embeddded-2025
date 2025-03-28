/**
 ******************************************************************************
 * @file           : problem_bonus.c
 * @author         : Mohamed Kadry
 * @date           : 27/3/2025
 * @brief          : Value reachability checker
 * @description    : Checks if N can be reached from 1 using ×10 or ×20 operations
 ******************************************************************************
 */

 #include <stdio.h>

 int is_reachable(long long n) {
     if (n == 1) return 1;
     if (n < 1) return 0;
     if (n % 10 == 0 && is_reachable(n / 10)) return 1;
     if (n % 20 == 0 && is_reachable(n / 20)) return 1;
     return 0;
 }
 
 void process_test_cases() {
     int t;
     scanf("%d", &t);
     while (t--) {
         long long n;
         scanf("%lld", &n);
         printf(is_reachable(n) ? "YES\n" : "NO\n");
     }
 }
 
 int main() {
     process_test_cases();
     return 0;
 }