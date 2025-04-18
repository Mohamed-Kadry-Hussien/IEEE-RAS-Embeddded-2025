/**
 ******************************************************************************
 * @file           : p9.c
 * @author         : Mohamed Kadry
 * @date           : 18/4/2025
 * @brief          : Lucky Array
 * @description    : Determine if the array is lucky or not.
 *                   The array is considered lucky if the frequency (number of occurrences) 
 *                   of the minimum element is odd, otherwise it's unlucky.
 ******************************************************************************
 */

 #include <stdio.h>

 int find_min_value(int arr[], int N);
 int count_min_frequency(int arr[], int N, int min_value);
 
 int main()
 {
     int N;
     scanf("%d", &N); 
 
     int A[N];
     for (int i = 0; i < N; i++)
     {
         scanf("%d", &A[i]); 
     }
 
     int min_value = find_min_value(A, N);
     int min_count = count_min_frequency(A, N, min_value);
 
     if (min_count % 2 == 1)
     {
         printf("Lucky\n");
     }
     else
     {
         printf("Unlucky\n");
     }
 
     return 0;
 }
 
 int find_min_value(int arr[], int N)
 {
     int min_value = arr[0];
     for (int i = 1; i < N; i++)
     {
         if (arr[i] < min_value)
         {
             min_value = arr[i];
         }
     }
     return min_value;
 }
 
 int count_min_frequency(int arr[], int N, int min_value)
 {
     int count = 0;
     for (int i = 0; i < N; i++)
     {
         if (arr[i] == min_value)
         {
             count++;
         }
     }
     return count;
 }
 