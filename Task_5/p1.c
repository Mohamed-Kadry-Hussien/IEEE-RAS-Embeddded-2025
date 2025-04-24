/**
 ******************************************************************************
 * @file           : p1.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : String Comparison Without Library Functions
 * @description    : Compares two strings character by character and returns 1 if identical, 0 otherwise
 ******************************************************************************
 */

 #include <stdio.h>

 int compare_strings(const char *str1, const char *str2) 
 {
     while (*str1 && *str2) {          // Loop while both strings have characters
         if (*str1 != *str2) {      
             return 0;                 // Return 0 if mismatch found
         }
         str1++;                       
         str2++;                    
     }
             return (*str1 == '\0' && *str2 == '\0');
 }
 
 int main() 
 {
     char string1[] = "RAS Chapter";
     char string2[] = "RAS Chapter";
     
     printf("String1: %s\n", string1);
     printf("String2: %s\n", string2);
     
     if (compare_strings(string1, string2)) {
         printf("Output:\nBoth strings are Identical\n");
     } else {
         printf("Output:\nStrings are Different\n");
     }
     
     return 0;
 }