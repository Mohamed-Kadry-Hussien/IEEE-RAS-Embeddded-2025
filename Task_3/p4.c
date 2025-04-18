/**
 ******************************************************************************
 * @file           : p4.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Matrix Addition
 * @description    : Given two matrices, the program adds them element-wise.
 *                   Matrix1 and Matrix2 are of the same size.
 ******************************************************************************
 */

 #include <stdio.h>

 void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]);
 
 int main() {
     int matrix1[3][3], matrix2[3][3], result[3][3];
 
     printf("Enter elements for matrix1:\n");
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             scanf("%d", &matrix1[i][j]);
         }
     }
 
     printf("Enter elements for matrix2:\n");
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             scanf("%d", &matrix2[i][j]);
         }
     }
 
     add_matrices(matrix1, matrix2, result);
 
     printf("Sum of both matrices:\n");
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             printf("%d ", result[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 
 void add_matrices(int matrix1[3][3], int matrix2[3][3], int result[3][3]) {
     for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
             result[i][j] = matrix1[i][j] + matrix2[i][j];
         }
     }
 }
 