/**
 ******************************************************************************
 * @file           : p4.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Matrix Multiplication Using Pointers
 * @description    : Multiplies two 3x3 matrices using pointer arithmetic
 ******************************************************************************
 */

 #include <stdio.h>

 #define SIZE 3
 
 void multiply_matrices(int (*mat1)[SIZE], int (*mat2)[SIZE], int (*result)[SIZE]) {
     int i, j, k;
     for (i = 0; i < SIZE; i++) {
         for (j = 0; j < SIZE; j++) {
             *(*(result + i) + j) = 0;  
             for (k = 0; k < SIZE; k++) {
                 *(*(result + i) + j) += *(*(mat1 + i) + k) * *(*(mat2 + k) + j);
             }
         }
     }
 }
 
 void print_matrix(int (*mat)[SIZE]) {
     int i, j;
     for (i = 0; i < SIZE; i++) {
         for (j = 0; j < SIZE; j++) {
             printf("%d ", *(*(mat + i) + j));
         }
         printf("\n");
     }
 }
 
 int main() {
     int mat1[SIZE][SIZE] = {{10, 20, 30}, 
                             {40, 50, 60}, 
                             {70, 80, 90}};
     int mat2[SIZE][SIZE] = {{1, 2, 3}, 
                             {4, 5, 6}, 
                             {7, 8, 9}};
     int result[SIZE][SIZE];
 
     multiply_matrices(mat1, mat2, result);
 
     printf("First matrix\n");
     print_matrix(mat1);
     printf("Second matrix\n");
     print_matrix(mat2);
     printf("Product of matrices is:\n");
     print_matrix(result);
 
     return 0;
 }