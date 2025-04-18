/**
 ******************************************************************************
 * @file           : p10.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Magic Square Checker
 * @description    : Check if a given 2D array is a magic square.
 *                   A magic square is a square matrix where the sum of all 
 *                   rows, columns, and diagonals are equal.
 ******************************************************************************
 */
#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    
    int square[100][100];
    
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &square[i][j]);
        }
    }
    
    int magic_constant = 0;
    for (int j = 0; j < size; j++) {
        magic_constant += square[0][j];
    }
    
    int is_magic = 1;
    
    for (int i = 1; i < size && is_magic; i++) {
        int row_sum = 0;
        for (int j = 0; j < size; j++) {
            row_sum += square[i][j];
        }
        if (row_sum != magic_constant) {
            is_magic = 0;
        }
    }
    
    for (int j = 0; j < size && is_magic; j++) {
        int col_sum = 0;
        for (int i = 0; i < size; i++) {
            col_sum += square[i][j];
        }
        if (col_sum != magic_constant) {
            is_magic = 0;
        }
    }
    
    int diag_sum = 0;
    for (int i = 0; i < size && is_magic; i++) {
        diag_sum += square[i][i];
    }
    if (diag_sum != magic_constant) {
        is_magic = 0;
    }
    
    diag_sum = 0;
    for (int i = 0; i < size && is_magic; i++) {
        diag_sum += square[i][size - 1 - i];
    }
    if (diag_sum != magic_constant) {
        is_magic = 0;
    }
    
    if (is_magic) {
        printf("The square is a magic square.\n");
    } else {
        printf("The square is not a magic square.\n");
    }
    
    return 0;
}