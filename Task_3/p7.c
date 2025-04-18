/**
 ******************************************************************************
 * @file           : p7.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Max Subsequence
 * @description    : Given a string, find the length of the longest subsequence
 *                   such that no two adjacent characters are the same.
 ******************************************************************************
 */

 #include <stdio.h>

 int max_subsequence_length(char str[], int size);
 
 int main()
 {
     int size;
     char str[100005];  
     
     scanf("%d", &size);
     scanf("%s", str);
 
     int result = max_subsequence_length(str, size);
     printf("%d\n", result);
 
     return 0;
 }
 
 int max_subsequence_length(char str[], int size)
 {
     int counter = 1; 
 
     for (int i = 1; i < size; i++)
     {
         if (str[i] != str[i - 1])
         {
             counter++;
         }
     }
 
     return counter;
 }
 