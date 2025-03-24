/**
 ******************************************************************************
 * @file           : problem_4.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : Check if a word is a palindrome
 * @description    : This program takes a word as input and checks whether it
 *                   reads the same backward as forward (a palindrome). The
 *                   result is printed indicating whether the word is a
 *                   palindrome or not.
 ******************************************************************************
 */

 #include <stdio.h>
 #include <string.h>
 #include <stdbool.h>
 
 bool is_palindrome(const char *word) {
     int length = strlen(word);
     for (int i = 0; i < length / 2; i++) {
         if (word[i] != word[length - 1 - i]) {
             return false;
         }
     }
     return true;
 }
 
 int main() {
     char word[100];
     
     printf("Enter a word: ");
     scanf("%s", word);
 
     if (is_palindrome(word)) {
         printf("The word '%s' is a palindrome\n", word);
     } else {
         printf("The word '%s' is not a palindrome\n", word);
     }
 
     return 0;
 }