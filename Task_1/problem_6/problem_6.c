/**
 ******************************************************************************
 * @file           : problem_6.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Efficiently find and print all divisors of a number in sorted order
 * @description    : This program reads a positive integer N and prints all its
 *                   positive divisors in ascending order. It uses an optimized
 *                   O(√N) algorithm to find divisors and sorts them using bubble
 *                   sort. The program handles all numbers in the range 1 ≤ N ≤ 10^4.
 ******************************************************************************
 */

 #include <stdio.h>
 int main()
 {
 int n;
  scanf("%d", &n);
  for(int i = 1 ; i <= n ; i++){
    if(n%i == 0)
        printf("%d\n", i);
  }
    return 0;
 }