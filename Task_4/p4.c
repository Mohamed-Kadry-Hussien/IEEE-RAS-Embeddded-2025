/**
 ******************************************************************************
 * @file           : even_digits.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : Print Even Digits Using Pointers
 * @description    : Extracts and prints even digits from a string using pointer arithmetic
 ******************************************************************************
 */

 #include <stdio.h>

int main()
{
    char str[] = "012345678";
    char *ptr = str;
    
    while (*ptr != '\0')
    {
        if (*ptr >= '0' && *ptr <= '9')
        {
            int num = *ptr - '0';
            if (num % 2 == 0)
            {
                printf("%c", *ptr);
            }
        }
        ptr++;
    }
    
    printf("\n");
    return 0;
}