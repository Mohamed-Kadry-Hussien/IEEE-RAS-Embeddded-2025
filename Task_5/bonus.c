/**
 ******************************************************************************
 * @file           : bonus.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Write a function that converts a string to an integer using pointers.
 ******************************************************************************
 */



#include <stdio.h>

int stringToInt(const char *str) {
    int num = 0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;  
    }


    while (*str >= '0' && *str <= '9') {
        num = num * 10 + (*str - '0');
        str++;  
    }

    return num * sign;
}

int main() {
    printf("%d\n", stringToInt("-70")); 
    printf("%d\n", stringToInt("60"));  

    return 0;
}
