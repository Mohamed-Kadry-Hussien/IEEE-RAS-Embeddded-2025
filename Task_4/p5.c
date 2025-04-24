/**
 ******************************************************************************
 * @file           : p5.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : function that returns the length of a string.
 ******************************************************************************
 */

#include <stdio.h>

int string_length(char *str) {
    char *ptr = str;
    while (*ptr != '\0') {
        ptr++;
    }
    return ptr - str;
}

int main() {
    char str[] = "Embedded Systems";
    printf("Str = '%s'\n", str);
    printf("Length = %d\n", string_length(str));
    return 0;
}