/**
 ******************************************************************************
 * @file           : p8.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Count Words
 * @description    : Count the number of words in a string where words are
 *                   sequences of English letters separated by spaces or symbols.
 ******************************************************************************
 */

 #include <stdio.h>

 int count_words_in_string(const char input_string[]);
 
 int main()
 {
     char input_string[1000005];
     fgets(input_string, sizeof(input_string), stdin); // Read the entire line with spaces
 
     int word_count = count_words_in_string(input_string);
     printf("%d\n", word_count);
 
     return 0;
 }
 
 int count_words_in_string(const char input_string[])
 {
     int index = 0, is_in_word = 0, word_count = 0;
 
     while (input_string[index] != '\0')
     {
         
         if ((input_string[index] >= 'A' && input_string[index] <= 'Z') || (input_string[index] >= 'a' && input_string[index] <= 'z'))
         {
             if (!is_in_word)
             {
                 word_count++;
                 is_in_word = 1;
             }
         }
         else
         {
             is_in_word = 0;
         }
         index++;
     }
 
     return word_count;
 }
 