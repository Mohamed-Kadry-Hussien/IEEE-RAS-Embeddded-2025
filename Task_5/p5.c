/**
 ******************************************************************************
 * @file           : p5.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Finds odd numbers in array and returns both the numbers and count
 ******************************************************************************
 */


#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int count = sizeof(numbers)/sizeof(numbers[0]);
    int *ptr = numbers;
    int odd_count = 0;
    
    printf("Odd numbers are: ");
    
    while(ptr < numbers + count) {
        if(*ptr % 2 != 0) {
            printf("%d ", *ptr);
            odd_count++;
        }
        ptr++;
    }
    
    printf("\nTotal odd numbers: %d\n", odd_count);
    
    return 0;
}