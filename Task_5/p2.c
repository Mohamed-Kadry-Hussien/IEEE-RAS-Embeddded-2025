/**
 ******************************************************************************
 * @file           : string_copy_func.c
 * @author         : Mohamed Kadry
 * @date           : 23/4/2025
 * @brief          : String Copy Using Function with Pointers
 * @description    : Copies a string to another string using a function with pointer arithmetic
 ******************************************************************************
 */

 #include <stdio.h>

 void copy_string(char *dest, const char *src) 
 {
     while (*src != '\0') 
     {
         *dest = *src;
         dest++;
         src++;
     }
     *dest = '\0';  // Add null terminator
 }
 
 int main() 
 {
     char original[] = "Embedded Systems";
     char copied[100];
     
     copy_string(copied, original);
     
     printf("Original String: %s\n", original);
     printf("Copied String: %s\n", copied);
     
     return 0;
 }