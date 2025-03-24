/**
 ******************************************************************************
 * @file           : problem_5.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Print numbers between N and M and their sum
 * @description    : This program reads pairs of numbers (N, M) and for each pair,
 *                   prints the numbers between them (inclusive) and their sum.
 *                   The program terminates when either number is ≤ 0.
 ******************************************************************************
 */

 #include <stdio.h>

 int main() {
     int N, M;
     
     while (1) {

        scanf("%d %d", &N, &M);
         
         // Check for termination condition
         if (N <= 0 || M <= 0) {
             break;
         }
         
         // Determine the smaller and larger numbers
         int start, end;
         if (N < M) {
             start = N;
             end = M;
         } else {
             start = M;
             end = N;
         }
         
         // Print the sequence and calculate sum
         int sum = 0;
         for (int i = start; i <= end; i++) {
             printf("%d ", i);
             sum += i;
         }
         
        
         printf("sum =%d\n", sum);
     }
     
     return 0;
 }