/**
 ******************************************************************************
 * @file           : p5.c
 * @author         : Mohamed Kadry
 * @date           : 18/04/2025
 * @brief          : Diagonal Difference
 * @description    : Given an N x N matrix, the program calculates the absolute 
 *                   difference between the sums of its two diagonals.
 ******************************************************************************
 */

 #include <stdio.h>
 #include <stdlib.h> 
 
 int main() {
     int N;
     scanf("%d", &N);
 
     int matrix[100][100];
     int mainDiagonalSum = 0;
     int secondaryDiagonalSum = 0;
 
     for (int i = 0; i < N; i++) {
         for (int j = 0; j < N; j++) {
             scanf("%d", &matrix[i][j]);
 
             if (i == j) {
                 mainDiagonalSum += matrix[i][j]; 
             }
 
             if (i + j == N - 1) {
                 secondaryDiagonalSum += matrix[i][j]; 
             }
         }
     }
 
     int difference = abs(mainDiagonalSum - secondaryDiagonalSum);
     printf("%d\n", difference);
 
     return 0;
 }
 