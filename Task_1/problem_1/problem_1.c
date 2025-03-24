/**
 *******************************************************************
 * @file           : problem_1.c
 * @author         : Mohamed Kadry
 * @date           : 22/3/2025
 * @brief          : This file contains the solution of Task_1_problem_1
 *******************************************************************
 */

 #include <stdio.h>
 #include <stdlib.h>
 
 int main()
 {
     int max_num, min_num, num;
     
     printf("Enter numbers (-1 to stop):\n");
     scanf("%d", &num);
     
     if (num == -1) {
         printf("No numbers entered.\n");
         return 0;
     }
     // Initialize min_num and max_num to the first valid input
     max_num = min_num = num;
     
     while (1) {
         scanf("%d", &num);
         if (num == -1) {
             break;
         }
         if (num > max_num) {
             max_num = num;
         }
         if (num < min_num) {
             min_num = num;
         }
     }
     
     printf("Maximum: %d  Minimum: %d\n", max_num, min_num);
     return 0;
 }